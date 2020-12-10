#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{   
    int x;

    x = 0;
    if(!s)
        return (NULL);
    while(x < n)
    {
        *(unsigned char*)(s + x) = (unsigned char)c;
        x++;
    }

    return (s);
}

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    memset( array, 0, size );
    ft_memset( array2, 0, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    printf( "test2\n" );
    for( length=0; length<5; length++) {
        printf( "%d ", array2[ length ] );
    }
    printf( "\n" );

    return 0;
}