#include <stdio.h>
#include <stdlib.h>

typedef struct luku
{
    int luku;
    struct luku *seuraava;
} SOLMU;

int main(void)
{
    printf("Anna listan luvut.\n");
    int luku;
    SOLMU *alku = NULL;
    SOLMU *loppu = NULL;

    while (1)
    {
        printf("Anna positiivinen kokonaisluku, 0 lopettaa: ");
        scanf("%d", &luku);
        
        if (luku == 0)
        {
            break;
        }
        SOLMU *uusi = malloc(sizeof(SOLMU));
        if (uusi == NULL)
        {
            perror("Muistin varaus epäonnistui\n");
            exit(1);
        }
        uusi->luku = luku;
        uusi->seuraava = NULL;
        if (alku == NULL)
        {
            alku = uusi;
            loppu = uusi;
        }
        else
        {
            loppu->seuraava = uusi;
            loppu = uusi;
        }

    }
    printf("Listassa on seuraavat luvut: ");
    SOLMU *liukuri = alku;
    while (liukuri != NULL)
    {
        printf("%d ", liukuri->luku);
        liukuri = liukuri->seuraava;
    }

    liukuri = alku;
    while (liukuri != NULL)
    {   
        alku = liukuri->seuraava;
        free(liukuri);
        liukuri = alku;
    }

    printf("\nKiitos ohjelman käytöstä.\n");

    return(0);
}