#include <stdio.h>
#include <string.h>

#define PITUUS 50

typedef struct henkilo
{
    char tunnus[PITUUS];
    char salasana[PITUUS];
    int id;
} HENKILO;




int main(void)
{
    HENKILO tunnukset[PITUUS];
    int id = 0;
    int maara = 0;
    printf("Käyttäjätunnusten hallinta.\n");
    while (1)
    {
        int valinta;
        printf("Valitse alla olevasta valikosta haluamasi toiminto:\n");
        printf("1) Lisää uusi tunnus\n");
        printf("2) Tulosta tunnukset\n");
        printf("0) Lopeta\n");
        printf("Valintasi: ");
        scanf("%d", &valinta);
        getchar();
        printf("\n");
        if (valinta == 1)
        {
            HENKILO uusi_henkilo;
            printf("Anna käyttäjätunnus: ");
            scanf("%s", uusi_henkilo.tunnus);
            getchar();
            printf("Anna salasana: ");
            scanf("%s", uusi_henkilo.salasana);

            uusi_henkilo.id = id;
            tunnukset[maara] = uusi_henkilo;
            maara += 1;
            id += 1;
            printf("Tunnus '%s' lisättiin listaan.\n", uusi_henkilo.tunnus);
        }
        else if (valinta == 2)
        {
            printf("Listalla olevat tunnukset:\n");
            for (int i = 0; i < maara; ++i)
            {
                printf("%d. tunnus '%s', salasana '%s', ID '%d'.\n", i+1, tunnukset[i].tunnus, tunnukset[i].salasana, tunnukset[i].id);
            }
        }
        else
        {
            break;
        }
        printf("\n");
    }

}