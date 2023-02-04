/****************************************************/
/*													*/
/* possible output:                                 */
// isalpha('\xdf') in default C locale returned 0
// isalpha('\xdf') in ISO - 8859 - 1 locale returned 1
//65 - 70		ABCDEF
//71 - 90		GHIJKLMNOPQRSTUVWXYZ
//97 - 102	abcdef
//103 - 122	ghijklmnopqrstuvwxyz
/****************************************************/
#include <ctype.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xdf'; // German letter ß in ISO-8859-1

    printf("isalpha('\\xdf') in default C locale returned %d\n", !!isalpha(c));

    setlocale(LC_CTYPE, "de_DE");
    printf("isalpha('\\xdf') in ISO-8859-1 locale returned %d\n", !!isalpha(c));
}