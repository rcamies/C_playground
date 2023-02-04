/****************************************************/
/*													*/
//33 - 47		!"#$%&'()*+,-./
//48 - 57		0123456789
//58 - 64		:; <=> ? @
//65 - 70		ABCDEF
//71 - 90		GHIJKLMNOPQRSTUVWXYZ
//91 - 96[\] ^ _`
//97 - 102	abcdef
//103 - 122	ghijklmnopqrstuvwxyz
//123 - 126	{ | }~
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xb6'; // the character ¶ in ISO-8859-1
    printf("In the default C locale, \\xb6 is %sgraphical\n",
        isgraph(c) ? "" : "not ");
    setlocale(LC_ALL, "en_GB");
    printf("In ISO-8859-1 locale, \\xb6 is %sgraphical\n",
        isgraph(c) ? "" : "not ");
}

// In the default C locale, \xb6 is not graphical
//In ISO - 8859 - 1 locale, \xb6 is graphical