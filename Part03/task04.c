#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void kopioi(char jono1[], char jono2[])
{
    int i = 0;
    do 
    {
        jono2[i] = jono1[i];
        i++;
    } 
    while (jono2[i-1] != '\0');
}

int main(void)
{
    char jono1[30];
    char jono2[30];

    printf("Anna ensimmäinen merkkijono: ");
    fgets(jono1, 30, stdin);
    jono1[strlen(jono1) - 1] = '\0';
    kopioi(jono1, jono2);
    printf("Merkkijono 1 on '%s'.\n", jono1);
    printf("Merkkijono 2 on '%s'.\n", jono2);


}