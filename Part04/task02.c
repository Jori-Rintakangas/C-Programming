#include <stdio.h>
#include <string.h>


long int laske_arvo(int luku)
{
    if (luku <= 1)
    {
        return luku;
    }
    return laske_arvo(luku - 1) + laske_arvo(luku - 2);
}




int main(void)
{
    int luku;
    long int tulos;

    printf("Anna luku, jolle lasketaan Fibonaccin luku: ");
    scanf("%d", &luku);
    tulos = laske_arvo(luku);
    printf("Luvun %d Fibonaccin luku on %ld.\n", luku, tulos);

}