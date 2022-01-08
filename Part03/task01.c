#include <stdio.h>


int laske_potenssi(int luku, int potenssi)
{
    int tulos = luku;
    for (int i = 1; i < potenssi; ++i)
    {
        tulos *= luku;
    }
    return tulos;
}


int main(void)
{
    int luku = 0;
    int potenssi = 0;
    printf("Ohjelma laskee luvun potenssin.\n");
    printf("Anna kokonaisluku, jonka haluat korottaa potenssiin: ");
    scanf("%d", &luku);

    printf("Anna potenssi, jonka haluat laskea: ");
    scanf("%d", &potenssi);

    int tulos = laske_potenssi(luku, potenssi);
    printf("%d ^ %d = %d.\n", luku, potenssi, tulos);

}