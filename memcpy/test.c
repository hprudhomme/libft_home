#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *sdest;
    unsigned char *ssrc;

    sdest = (unsigned char*)dest;
    ssrc = (unsigned char*)src;

    while (n--)
    {
        *sdest = *ssrc;
        *sdest++;
        *ssrc++;
    }

    return (dest);
}

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int * copy2 = NULL;
    int length = sizeof( int ) * 5;
       
    /* Memory allocation and copy */
    copy = (int *) malloc( length );
    copy2 = (int *) malloc( length );
    memcpy( copy, array, length );
    ft_memcpy( copy2, array, length );
        
    /* Display the copied values */
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
    printf( "test2 \n" );

    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}