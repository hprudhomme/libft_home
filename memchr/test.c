#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;

    str = (unsigned char*)s;
    while (n--)
    {
        if (*str == (unsigned char)c)
        {
            // printf("je suis la \n");
            // printf("%d\n", *str);
            return (str);
        }
        *str++;
    }
    return (NULL);
}

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    // On recherche une valeur inhéxistante :
    void * found = memchr( data, 57, size );
    void * found2 = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );
    printf("test2");
    printf( "57 is %s\n", ( found2 != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = memchr( data, 50, size );
    found2 = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    printf("test2 \n");
    printf( "50 is %s\n", ( found2 != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found2) );
    }

    return EXIT_SUCCESS;
}