#include <stdio.h>

int main(void)
{
    int luku1 = 0;
    int luku2 = 0;
    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &luku1);
    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &luku2);

    int tulos1 = (luku1 + luku2) * 2;
    int tulos2 = (luku1 / luku2) - 3;
    int tulos3 = (luku1 + 1) % (luku2 - 1);
    printf("(%d + %d) * 2 = %d\n", luku1, luku2, tulos1);
    printf("(%d / %d) - 3 = %d\n", luku1, luku2, tulos2);
    printf("%d %% %d = %d \n", luku1 + 1, luku2 - 1, tulos3);
    return(0);
}