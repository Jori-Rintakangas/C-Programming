#include <stdio.h>
#include <stdlib.h>


void vapautaMuisti(int *taulukko)
{
    free(taulukko);
}

void tulostaTaulukko(int *taulukko, int koko)
{
    if (koko == 0)
    {
        printf("Taulukko on tyhjä.\n");
        return;
    }
    printf("Taulukon alkiot ovat: ");
    for (int i = 0; i < koko; ++i)
    {
        printf("%d ", taulukko[i]);
    }
    printf("\n");
}

int* varaaMuisti(int koko)
{
    int *taulukko = malloc(koko * sizeof(int));
    if (taulukko == NULL) 
    {
        perror("Muistin varaus epäonnistui\n");
        exit(1);
    }
    for (int i = 0; i < koko; ++i)
    {
        taulukko[i] = i;
    }
    return taulukko;
}

int main(int argc, char *argv[])
{
    int koko = 0;
    int *taulukko = NULL;
    while (1)
    {
        int valinta;
        printf("1) Tulosta taulukon alkiot\n");
        printf("2) Muuta taulukon kokoa\n");
        printf("0) Lopeta\n");
        printf("Anna valintasi: ");
        scanf("%d", &valinta);
        
        if (valinta == 1)
        {
            tulostaTaulukko(taulukko, koko);
        }
        else if (valinta == 2)
        {
            printf("Anna taulukon uusi koko: ");
            int edellinen_koko = koko;
            scanf("%d", &koko);
            if (koko >= 0)
            {
                vapautaMuisti(taulukko);
                taulukko = varaaMuisti(koko);
            }
            else
            {   
                printf("Taulukon koko ei voi olla negatiivinen.\n");
                koko = edellinen_koko;
            }
        }
        else if (valinta == 0)
        {
            vapautaMuisti(taulukko);
            printf("Kiitos ohjelman käytöstä.\n");
            break;
        }
        else
        {
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }
    }
}