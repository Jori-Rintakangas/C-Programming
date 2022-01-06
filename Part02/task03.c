#include <stdio.h>
#include <string.h>

int main(void)
{
    int luku;
    printf("Anna jokin kokonaisluku väliltä 1-10: ");
    scanf("%d", &luku);

    if (luku < 1 || luku > 10)
    {
        printf("Antamasi luku ei ole välillä 1-10.\n");
    }
    else
    {
        int i = 1;
        while (i <= luku)
        {
            printf("%d kierros.\n", i);
            i++;
        }
    }
    return(0);
}