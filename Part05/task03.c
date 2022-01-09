#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PITUUS 30

typedef struct henkilo
{
    char nimi[PITUUS];
    int ika;
} HENKILO;


HENKILO* kopioi(HENKILO henkilo)
{
    HENKILO *henkilo3 = malloc(sizeof(HENKILO));
    if (henkilo3 == NULL)
    {
        perror("Muistin varaus epäonnistui\n");
        exit(1);
    }
    strcpy(henkilo3->nimi, henkilo.nimi);
    henkilo3->ika = henkilo.ika;
    return henkilo3;
}


int vertaa(HENKILO henkilo1, HENKILO henkilo2)
{
    if (strcmp(henkilo1.nimi, henkilo2.nimi) == 0 && henkilo1.ika == henkilo2.ika)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    HENKILO henkilo1;
    HENKILO henkilo2;
    
    printf("Anna ensimmäisen henkilön etunimi: ");
    scanf("%s", henkilo1.nimi);
    getchar();
    printf("Anna ensimmäisen henkilön ikä: ");
    scanf("%d", &henkilo1.ika);

    printf("Anna toisen henkilön etunimi: ");
    scanf("%s", henkilo2.nimi);
    getchar();
    printf("Anna toisen henkilön ikä: ");
    scanf("%d", &henkilo2.ika);

    if (vertaa(henkilo1, henkilo2))
    {
        printf("Annetut tiedot ovat samoja.\n");
    }
    else
    {
        printf("Annetut tiedot eivät ole samoja.\n");
    }

    HENKILO *henkilo3 = kopioi(henkilo1);

    if (strcmp(henkilo1.nimi, henkilo3->nimi) == 0 && henkilo1.ika == henkilo3->ika)
    {
        printf("Kopioinnin jälkeen tietueiden tiedot ovat samoja.\n");
    }
    if (&henkilo1 != henkilo3)
    {
        printf("Kopioinnin jälkeen tietueiden osoitteet eivät ole samoja.\n");
    }
    free(henkilo3);
    printf("Kiitos ohjelman käytöstä.\n");
}


