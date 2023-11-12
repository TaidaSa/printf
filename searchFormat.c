#include "main.h"

int _searchFormat(char f, char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == f)
            return (i);
    }
    return (-1);
}