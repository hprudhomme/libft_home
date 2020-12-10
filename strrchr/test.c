#include <stdio.h>
#include <string.h>

size_t  ft_strlen(const char *s)
{
    int x;

    x = 0;
    while (s)
        x++;
    return (x);
}

char    *ft_strrchr(const char *s, int c)
{   
    
    char *save = 0;

    while (*s)
    {
        if (*s == c)
            save = (char*)s;
        *s++;
    }
    return (save);
}

int main(void)
{
    const char *tab = "azertey";

    printf("%s \n", ft_strrchr(tab, 101));
    printf("%s \n", strrchr(tab, 101));

}