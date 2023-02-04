/****************************************************/
/*													*/
/* possible output:                                 */
// isalnum('\xdf') in default C locale returned 0
// isalnum('\xdf') in ISO - 8859 - 1 locale returned 1
//48 - 57		0123456789
//65 - 70		ABCDEF
//71 - 90		GHIJKLMNOPQRSTUVWXYZ
//97 - 102	    abcdef
//103 - 122	    ghijklmnopqrstuvwxyz
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xdf'; // German letter ß in ISO-8859-1

    printf("isalnum('\\xdf') in default C locale returned %d\n", !!isalnum(c));

    if (setlocale(LC_CTYPE, "de_DE"))
        printf("isalnum('\\xdf') in ISO-8859-1 locale returned %d\n", !!isalnum(c));
}

