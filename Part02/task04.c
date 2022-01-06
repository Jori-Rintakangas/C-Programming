#include <stdio.h>
#include <string.h>

#define PII 3.141

int main(void)
{
    float luku;
    int valinta;
    printf("Anna liukuluku: ");
    scanf("%f", &luku);
    getchar();
    printf("\n");

    printf("Valikko\n1) Kerro piin arvo luvulla %1.3f.\n2) Jaa piin arvo luvulla %1.3f.\nValitse: ", luku, luku);
    scanf("%d", &valinta);
    printf("\n");

    switch (valinta)
    {
        case 1:
            printf("Pii * %1.3f = %1.3f.\n", luku, PII * luku);
            break;
        case 2:
            printf("Pii / %1.3f = %1.3f.\n", luku, PII / luku);
            break;
        default:
            printf("Tuntematon valinta.\n");
            break;
    }

    return(0);
}