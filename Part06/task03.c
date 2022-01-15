#include <stdio.h>
#include <stdlib.h>


typedef struct alkio
{
    int arvo;
    struct alkio *seuraava;
} ALKIO;

void vapautaMuisti(ALKIO *alku)
{
    ALKIO *liukuri = alku;
    while (liukuri != NULL)
    {
        alku = liukuri->seuraava;
        free(liukuri);
        liukuri = alku;
    }
}

void tulostaTaulukko(ALKIO *alku)
{
    if (alku == NULL)
    {
        printf("Lista on tyhjä.\n");
        return;
    }
    printf("Listassa on seuraavat luvut: \n");
    ALKIO *liukuri = alku;
    while (liukuri != NULL)
    {
        printf("%d ", liukuri->arvo);
        liukuri = liukuri->seuraava;
    }
    printf("\n");
}

void varaaMuisti(int koko, ALKIO **alku, ALKIO **loppu)
{
    for (int i = 0; i < koko; ++i)
    {
        ALKIO *uusi = malloc(sizeof(ALKIO));
        if (uusi == NULL)
        {
            perror("Muistinvaraus epäonnistui.\n");
            exit(1);
        }
        uusi->arvo = i;
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
}

int main(int argc, char *argv[])
{
    int koko = 0;
    ALKIO *alku = NULL;
    ALKIO *loppu = NULL;
    while (1)
    {
        int valinta;
        printf("1) Tulosta listan alkiot\n");
        printf("2) Muuta listan pituutta\n");
        printf("0) Lopeta\n");
        printf("Anna valintasi: ");
        scanf("%d", &valinta);
        
        if (valinta == 1)
        {
            tulostaTaulukko(alku);
        }
        else if (valinta == 2)
        {
            printf("Anna listan uusi pituus: ");
            int edellinen_koko = koko;
            scanf("%d", &koko);
            if (koko >= 0)
            {
                vapautaMuisti(alku);
                alku = NULL;
                loppu = NULL;
                varaaMuisti(koko, &alku, &loppu);
            }
            else
            {   
                printf("Listan pituus ei voi olla negatiivinen.\n");
                koko = edellinen_koko;
            }
        }
        else if (valinta == 0)
        {
            vapautaMuisti(alku);
            printf("Kiitos ohjelman käytöstä.\n");
            break;
        }
        else
        {
            printf("Tuntematon valinta, yritä uudestaan.\n");
        }
    }
}