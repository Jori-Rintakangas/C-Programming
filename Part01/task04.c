#include <stdio.h>

int main(void)
{
    char merkki;
    char merkkijono[20];
    printf("Anna merkki: ");
    scanf("%c", &merkki);
    printf("Annoit merkin '%c'.\n", merkki);

    printf("Anna korkeintaan 20 merkkiä pitkä merkkijono: ");
    scanf("%s", merkkijono);
    printf("Annoit merkkijonon '%s'.\n", merkkijono);

    return(0);
}