#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tulosta_luvut(char *tiedosto_nimi)
{
    FILE *tiedosto = fopen(tiedosto_nimi, "rb");
    int luku;
    printf("Tiedostossa on seuraavat luvut: \n");
    for (int i = 0; i < 20; i++)
    {
        fread(&luku, sizeof(luku), 1, tiedosto);
        printf("%d ", luku);
    }
    fclose(tiedosto);
    return;
}

void tallenna_luvut(char *tiedosto_nimi)
{
    srand(1);
    FILE *tiedosto = fopen(tiedosto_nimi, "ab");
    for (int i = 0; i < 20; i++)
    {
        int j = rand() % 1000;
        fwrite(&j, sizeof(j), 1, tiedosto);
    }
    fclose(tiedosto);
    return;
}

int main(void)
{
    char tiedosto_nimi[] = "luvut.bin";
    tallenna_luvut(tiedosto_nimi);
    printf("Lukujen tallennus onnistui.\n");
    tulosta_luvut(tiedosto_nimi);
    printf("\n");
}