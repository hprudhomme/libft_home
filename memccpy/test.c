#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *sdest;
    unsigned char *ssrc;

    sdest = (unsigned char*)dest;
    ssrc = (unsigned char*)src;
    while (n--)
    {   
        *sdest = *ssrc;
        if (*ssrc == (unsigned char)c)
            return (dest + 1);
        *sdest++;
        *ssrc++;
    }
    return NULL;
}

int main() {

    const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
    size_t length = strlen( text );

    // On essaye de trouver la première phrase dans le texte.
    char firstSentence[ length ];
    char pirstSentence[ length ];
    char * res = memccpy( firstSentence, text, '.', length );
    char * ress = ft_memccpy( pirstSentence, text, '.', length );

    // On affiche le resultat.
    if ( res != NULL ) {
        printf( "Une phrase entière a été trouvée.\n" );
        printf( "\t%s\n", firstSentence );

        printf( "test2.\n" );
        printf( "\t%s\n", pirstSentence );
    } else {
        printf( "Aucune phrase entière trouvée.\n" );
    }

    return EXIT_SUCCESS;
}