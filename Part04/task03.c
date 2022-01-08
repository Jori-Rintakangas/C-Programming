#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float laske(float luku1, char operaatio, float luku2)
{
    if (operaatio == '+')
    {
        return luku1 + luku2;
    }
    else if (operaatio == '-')
    {
        return luku1 - luku2;
    }
    else if (operaatio == '/')
    {
        return luku1 / luku2;
    }
    else
    {
        return luku1 * luku2;
    }
}

int main(int argc, char *argv[])
{
    char operaatio = argv[2][0];

    if (argc == 1)
    {
        printf("Et antanut syötteitä.\n");
    }
    else if (operaatio != '+' && operaatio != '-' && operaatio != 'x' && operaatio != '/')
    {
        printf("Virheellinen syöte.\n");
    }
    else
    {
        printf("%s %s %s = ", argv[1], argv[2], argv[3]);
        printf("%1.2f\n", laske(atof(argv[1]), operaatio, atof(argv[3])));
    }

    return(0); 
}