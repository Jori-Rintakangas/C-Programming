#include <stdio.h>

int main(void)
{
    int luku;
    int summa = 0;
    printf("Anna jokin luku väliltä 10 - 200: ");
    scanf("%d", &luku);

    if (luku < 10 || luku > 200)
    {
        printf("Antamasi luku ei ole annetulla välillä.\n");
    }
    else
    {
        for (int i = 1; i <= luku; ++i)
        {
            summa += i;
        }
        printf("Lukujen 0 - %d summa on %d.\n", luku, summa);
    }

    return(0);
}