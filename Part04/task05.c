#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RIVI 2
#define SARAKE 2

void tulosta(int matriisi[RIVI][SARAKE], char nimi[])
{
    printf("%s\n", nimi);
    for (int i = 0; i < RIVI; i++) 
    {
        for (int j = 0; j < SARAKE; j++)
        {
            printf("%4d", matriisi[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int i = 0;;
    int j = 0;
    int matriisi1[RIVI][SARAKE];
    printf("Anna arvot yhteenlaskettaville matriiseille:\n");
    printf("Matriisin 1 alkiot:\n");

    printf("Rivi 1 alkio 1: ");
    scanf("%d", &matriisi1[i][j]);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &matriisi1[i][j+1]);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &matriisi1[i+1][j]);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &matriisi1[i+1][j+1]);

    printf("\n");
    tulosta(matriisi1, "Matriisi 1:");
    printf("\n");

    int ii = 0;
    int jj = 0;
    int matriisi2[RIVI][SARAKE];
    printf("Matriisin 2 alkiot:\n");

    printf("Rivi 1 alkio 1: ");
    scanf("%d", &matriisi2[ii][jj]);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &matriisi2[ii][jj+1]);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &matriisi2[ii+1][jj]);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &matriisi2[ii+1][jj+1]);

    printf("\n");
    tulosta(matriisi2, "Matriisi 2:");
    printf("\n");

    int summa[RIVI][SARAKE];
    for (int i = 0; i < RIVI; i++) 
    {
        for (int j = 0; j < SARAKE; j++)
        {
            summa[i][j] = matriisi1[i][j] + matriisi2[i][j];
        }
    }
    printf("\n");
    tulosta(summa, "Summamatriisi:");
    printf("\n");


}