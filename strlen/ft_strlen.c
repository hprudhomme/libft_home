#include <stdio.h>

int  ft_strlen(const char *s)
{
    int x;

    x = 0;
    while (s[x])
        x++;
    return (x);
}