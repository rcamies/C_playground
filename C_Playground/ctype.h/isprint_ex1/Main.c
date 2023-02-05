/****************************************************/
/*													*/
//32 < space > (SP)
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
    unsigned char c = '\xa0'; // the non-breaking space in ISO-8859-1
    printf("In the default C locale, \\xa0 is %sprintable\n", isprint(c) ? "" : "not ");
    setlocale(LC_ALL, "en_GB");
    printf("In ISO-8859-1 locale, \\xa0 is %sprintable\n", isprint(c) ? "" : "not ");
}

//In the default C locale, \xa0 is not printable
//In ISO - 8859 - 1 locale, \xa0 is printable