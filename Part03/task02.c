#include <stdio.h>
#include <string.h>


void tulosta_nimet(char *tiedosto_nimi)
{
    char rivi[50];
    FILE *tiedosto = fopen(tiedosto_nimi, "r");

    printf("Tiedostossa olevat nimet:\n");
    while (fgets(rivi, 50, tiedosto) != NULL)
    {
        printf("%s", rivi);
    }
    fclose(tiedosto);
    return;
}


void tallenna_nimi(char *tiedosto_nimi)
{
    char uusi_nimi[50];
    FILE *tiedosto = fopen(tiedosto_nimi, "a");
    printf("Anna tallennettava nimi: ");
    fgets(uusi_nimi, 50, stdin);
    uusi_nimi[strlen(uusi_nimi) - 1] = '\0';
    fprintf(tiedosto, "%s\n", uusi_nimi);
    fclose(tiedosto);
    printf("Nimi on tallennettu tiedostoon.\n");

    return;
}

int main(void)
{
    char tiedosto_nimi[] = "nimet.txt";
    printf("Ohjelma tallentaa nimiä tiedostoon.\n");
    printf("\n");
    while (1)
    {
        int valinta;
        printf("1) Tallenna uusi nimi\n");
        printf("2) Tulosta nimet\n");
        printf("0) Lopeta\n");
        printf("Valitse: ");
        scanf("%d", &valinta);
        getchar();
        printf("\n");
        if (valinta == 1)
        {
            tallenna_nimi(tiedosto_nimi);
        }
        else if (valinta == 2)
        {
            tulosta_nimet(tiedosto_nimi);
        }
        else
        {
            break;
        }
        printf("\n");
    }

}