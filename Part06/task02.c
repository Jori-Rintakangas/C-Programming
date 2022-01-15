#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ajoneuvo
{
    int vuosimalli;
    char merkki[20];
    struct ajoneuvo *seuraava;
} AJONEUVO;


void vapauta_muisti(AJONEUVO *alku)
{
    AJONEUVO *liukuri = alku;
    while (liukuri != NULL)
    {   
        alku = liukuri->seuraava;
        free(liukuri);
        liukuri = alku;
    }
}

void tulosta_tiedot(AJONEUVO *alku)
{
    if (alku == NULL)
    {
        printf("Ajoneuvoja ei löytynyt.\n");
        return;
    }
    AJONEUVO *liukuri = alku;
    int i = 1;
    while (liukuri != NULL)
    {
        printf("%d. ajoneuvo: %s vuosimalli %d.\n", i, liukuri->merkki, liukuri->vuosimalli);
        liukuri = liukuri->seuraava;
        i++;
    }
}

void tallenna_alkio(char *p1, char *p2, AJONEUVO **alku, AJONEUVO **loppu)
{
    AJONEUVO *uusi = malloc(sizeof(AJONEUVO));
    if (uusi == NULL)
    {
        perror("Muistinvaraus epäonnistui.\n");
        exit(1);
    }
    uusi->vuosimalli = atoi(p2);
    strcpy(uusi->merkki, p1);
    uusi->seuraava = NULL;
    if (*alku == NULL)
    {
        *alku = uusi;
        *loppu = uusi;
    }
    else
    {
        (*loppu)->seuraava = uusi;
        *loppu = uusi;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Et antanut tiedoston nimeä.\n");
    }
    else
    {
        FILE *tiedosto;
        char rivi[50], *p1, *p2;
        printf("Luetaan tiedot tiedostosta %s.\n", argv[1]);
        if ((tiedosto = fopen(argv[1], "r")) == NULL) 
        {
            printf("Tiedoston avaus epäonnistui.\n");
        }
        else
        {
            AJONEUVO *alku = NULL;
            AJONEUVO *loppu = NULL;
            while (fgets(rivi, 50, tiedosto) != NULL) 
            {
                p1 = strtok(rivi, " ");
                p2 = strtok(NULL, "\n");
                tallenna_alkio(p1, p2, &alku, &loppu);
            }
            fclose(tiedosto);
            printf("Tiedot luettu linkitettyyn listaan.\n");
            tulosta_tiedot(alku);
            vapauta_muisti(alku);
            printf("Muisti vapautettu.\n");
        }
    }
    return(0);
}