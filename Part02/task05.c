#include <stdio.h>
#include <string.h>

const int KOKO = 200;

int main(void)
{
    int pituus = 0;
    char merkkijono[KOKO];
    int lopeta = 0;
    while (lopeta == 0)
    {
        int valinta;
        char merkki;
        printf("\n");
        printf("Valikko\n1) Lisää uusi merkki\n2) Tyhjennä merkkijono\n3) Tulosta merkkijono\n0) Lopeta\nValintasi: ");
        scanf("%d", &valinta);
        printf("\n");
        getchar();

        switch (valinta)
        {
            case 1:
                if (pituus == KOKO)
                {
                    printf("Merkkijonoon ei mahdu enempää merkkejä.\n");
                    break;
                }
                printf("Anna jokin merkki: ");
                scanf("%c", &merkki);
                merkkijono[pituus] = merkki;
                pituus += 1;
                break;
            case 2:
                if (pituus == 0)
                {
                    printf("Merkkijono on tyhjä.\n");
                    break;
                }
                for (int i = 0; i <= pituus; ++i)
                {
                    merkkijono[i] = ' ';
                }
                pituus = 0;
                printf("Merkkijono on tyhjennetty.\n");
                break;
            case 3:
                if (pituus == 0)
                {
                    printf("Merkkijono on tyhjä.\n");
                    break;
                }
                printf("Merkkijono: ");
                for (int i = 0; i < pituus; ++i)
                {
                    printf("%c", merkkijono[i]);
                }
                printf("\n");
                break;
            case 0:
                printf("Ohjelman lopetus.\n");
                lopeta = 1;
                break;
            default:
                printf("Tuntematon valinta.\n");
                break;
        }
    }

    return(0);
}