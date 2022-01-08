#include <stdio.h>
#include <string.h>

#define PITUUS 50

struct Kirja
{
    char nimi[PITUUS];
    int painovuosi;
    int hyllypaikka;
};


int main(void)
{
    struct Kirja k;
    char nimi[PITUUS];
    int painovuosi;
    int hyllypaikka;

    printf("Anna kirjan nimi: ");
    fgets(k.nimi, PITUUS, stdin);
    k.nimi[strlen(k.nimi) - 1] = '\0';

    printf("Anna kirjan painovuosi: ");
    scanf("%d", &k.painovuosi);

    printf("Anna kirjan hyllypaikka: ");
    scanf("%d", &k.hyllypaikka);

    printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.\n", k.nimi, k.painovuosi, k.hyllypaikka);

    return(0);
    
}