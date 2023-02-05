/****************************************************/
/*													*/
/****************************************************/

#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <limits.h>

int main(void)
{
    /* In the default locale: */
    for (unsigned char u = 0; u < UCHAR_MAX; u++) {
        unsigned char l = tolower(u);
        if (l != u) printf("%c%c ", u, l);
    }
    printf("\n\n");

    unsigned char c = '\xb4'; // the character Ž in ISO-8859-15
    // but ´ (acute accent) in ISO-8859-1
    setlocale(LC_ALL, "en_US");
    printf("in iso8859-1, tolower('0x%x') gives 0x%x\n", c, tolower(c));
    setlocale(LC_ALL, "en_US.Windows-28605");
    printf("in iso8859-15, tolower('0x%x') gives 0x%x\n", c, tolower(c));
}

// Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy Zz
//
//in iso8859 - 1, tolower('0xb4') gives 0xb4
//in iso8859 - 15, tolower('0xb4') gives 0xb4