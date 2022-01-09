#include <stdio.h>
#include <stdlib.h>


void vapautaMuisti(int *taulukko)
{
    free(taulukko);
}

void tulostaTaulukko(int *taulukko, int koko)
{
    printf("Taulukossa on luvut: ");
    for (int i = 0; i < koko; ++i)
    {
        printf("%d ", taulukko[i]);
    }
    printf("\n");
}

void taytaTaulukko(int *taulukko, int koko)
{
    printf("Taulukossa on tilaa %d alkiolle.\n", koko);
    for (int i = 0; i < koko; ++i)
    {
        printf("Anna %d. luku: ", i + 1);
        scanf("%d", &taulukko[i]);
    }
}

int* varaaMuisti(int koko)
{
    int *taulukko = malloc(koko * sizeof(int));
    if (taulukko == NULL) 
    {
        perror("Muistin varaus epäonnistui\n");
        exit(1);
    }
    return taulukko;
}

int tarkistaSyote(char syote[])
{
    int luku = atoi(syote);
    if (luku < 0)
    {
        return 0;
    }
    return luku;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Et antanut taulukon kokoa.\n");
    }
    else
    {
        int koko = tarkistaSyote(argv[1]);
        if (koko != 0)
        {
            int *taulukko = varaaMuisti(koko);
            taytaTaulukko(taulukko, koko);
            tulostaTaulukko(taulukko, koko);
            vapautaMuisti(taulukko);
        }
        else
        {
            printf("Parametri ei ollut positiivinen kokonaisluku.\n");
        }
    }
}