#include <stdio.h>
#include <stdlib.h>

static char    **ft_second_malloc(char **tab, char const *s, char c)
{   
    int i;
    int x;
    int count;

    x = 0;
    i = 0;
    count = 0;
    while (s[x])
    {   
        while (s[x] == c)
        {   
            x++;
        }
        count = 0;
        while (s[x] != c && s[x])
        {
            x++;
            count++;
        }
        if (count != 0)
        {
            printf("ligne : %d -> malloc : %d \n", i, count);
            if (!(tab[i] = malloc(sizeof(char*) * (count + 10))))
					return (NULL);
            i++;
        }
    }
    return (tab);
}

static char    **ft_first_malloc(char **tab, char const *s, char c)
{
    int x = 0;
    int count = 0;
   
    while (s[x])
    {
        while (s[x] == c)
        {   
            x++;
        }
        while (s[x] != c && s[x])
        {
            if (s[x - 1] == c || x == 0)
                count++;
            x++;
        }
    }
    printf("malloc ligne : %d \n", count);
    if (!(tab = (char **)malloc(sizeof(char*) * (count + 20))))
		return (NULL);
	return (tab);
}

char **ft_split(char const *s, char c)
{   
    char **tab;
    int x;
    int ligne;
    int col;

    tab = NULL;
	if ((tab = ft_first_malloc(tab, s, c)) == NULL)
		return (NULL);
	if ((tab = ft_second_malloc(tab, s, c)) == NULL)
		return (NULL);
    ligne = 0;
    col = 0;
    x = 0;
    while (s[x])
    {   
        printf("ligne = %d \n", ligne);
        while (s[x] == c)
            x++;
        col = 0;
        while (s[x] != c && s[x])
        {   
            printf("%d||%d => %c \n", ligne, col, s[x]);
            tab[ligne][col] = s[x];
            x++;
            col++;
            if (s[x] == c)
                tab[ligne][col] = '\0';
        }
        ligne++;
    }
    printf("%s \n", tab[0]);
    printf("%s \n", tab[1]);
    printf("%s \n", tab[2]);
    printf("%s \n", tab[3]);
    printf("%s \n", tab[4]);
    printf("%s \n", tab[5]);
    return (tab);
}

int main()
{	
	char s[] = "blabla";
	char sep[] = "a";
	ft_split("ba:ab:ab:ab:aaa::bg", ':');
}