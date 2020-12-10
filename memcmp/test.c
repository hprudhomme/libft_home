#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* My memcmp implementation */
int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char*)s1;
    str2 = (unsigned char*)s2;
    while (n--)
    {
        if (*str1 != *str2)
            return (*str1 - *str2);
        *str1++;
        *str2++;
    }
    return (0);
}

int main() {

    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    assert( memcmp( array1, array2, size) == ft_memcmp( array1, array2, size) );       
    assert( memcmp( array1, array1, size) == ft_memcmp( array1, array1, size) );       
    assert( memcmp( array2, array1, size) == ft_memcmp( array2, array1, size) );       
    
    printf( "Test is ok\n" );
    
    return 0;
}