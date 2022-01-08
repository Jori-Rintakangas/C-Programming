#include <stdio.h>
#include <string.h>

int main(void)
{
    int luku1, luku2;
    printf("Anna kaksi kokonaislukua:\n");
    printf("Luku 1: ");
    scanf("%d", &luku1);
    printf("Luku 2: ");
    scanf("%d", &luku2);
    if (luku1 != luku2)
    {
        printf("Luku %d on suurempi ja %d pienempi.\n", 
        luku1 > luku2 ? luku1 : luku2, luku1 > luku2 ? luku2 : luku1);
    }
    else
    {
        printf("Luvut %d ja %d ovat yhtä suuria.\n", luku1, luku2);
    }

    float dluku1, dluku2;
    printf("Anna kaksi desimaalilukua:\n");
    printf("Luku 1: ");
    scanf("%f", &dluku1);
    printf("Luku 2: ");
    scanf("%f", &dluku2);
    if (dluku1 != dluku2)
    {
        printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", 
        dluku1 > dluku2 ? dluku1 : dluku2, dluku1 > dluku2 ? dluku2 : dluku1);
    }
    else
    {
        printf("Luvut %5.2f ja %5.2f ovat yhtä suuria.\n", dluku1, dluku2);
    }

    char nimi1[20];
    char nimi2[20];
    printf("Anna kaksi nimeä:\n");
    printf("Nimi 1: ");
    scanf("%s", nimi1);
    getchar();
    printf("Nimi 2: ");
    scanf("%s", nimi2);
    if (strcmp(nimi1, nimi2) == 0)
    {
        printf("Merkkijonona '%s' ja '%s' ovat yhtä suuria.\n", nimi1, nimi2);
    }
    else if (strcmp(nimi1, nimi2) > 0)
    {
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", nimi1, nimi2);
    }
    else
    {
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", nimi2, nimi1);
    }


}