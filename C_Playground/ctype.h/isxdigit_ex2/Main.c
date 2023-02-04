/****************************************************/
/*													*/
// 48-57		0123456789
// 65-70		ABCDEF
// 97-102	    abcdef
/****************************************************/
/* isxdigit example */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char str[] = "ffff";
    long int number;
    if (isxdigit(str[0]))
    {
        number = strtol(str, NULL, 16);
        printf("The hexadecimal number %lx is %ld.\n", number, number);
    }
    return 0;
}

// The hexadecimal number ffff is 65535.