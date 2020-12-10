#include <stdio.h>
#include <string.h>

char    *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char*)s);
        *s++;
    }
    if ((char)c == '\0')
		return ((char*)s);
	return (NULL);
}

int main(void)
{
    const char *tab = "azerty";

    printf("%s \n", ft_strchr(tab, 101));
    printf("%s \n", strchr(tab, 101));

}