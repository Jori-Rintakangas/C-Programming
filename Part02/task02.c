#include <stdio.h>
#include <string.h>

int main(void)
{
    int luku1;
    int luku2;
    int tulos;
    int valinta;
    printf("Anna kaksi kokonaislukua: ");
    scanf("%d", &luku1);
    getchar();
    scanf("%d", &luku2);
    printf("\n");

    printf("Valikko\n1) Summaa luvut yhteen.\n2) Kerro luvut keskenään.\nValitse: ");
    getchar();
    scanf("%d", &valinta);
    printf("\n");

    if (valinta == 1)
    {
        printf("Luvut laskettiin yhteen. Tulos = %d.\n", luku1 + luku2);
    }
    else if (valinta == 2)
    {
        printf("Luvut kerrottiin keskenään. Tulos = %d.\n", luku1 * luku2);
    }
    else
    {
        printf("Tuntematon valinta.\n");
    }
    return(0);
}