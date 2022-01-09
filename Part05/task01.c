#include <stdio.h>
#include <stdlib.h>

int laske_nelio(int luku)
{
    return luku * luku;
}


int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Et antanut lukua!\n");
    }
    else
    {
        printf("Luku on %d.\n", atoi(argv[1]));
        printf("Luvun neliö on %d.\n", laske_nelio(atoi(argv[1])));
    }
}