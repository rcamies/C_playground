/****************************************************/
/*													*/
//33 - 47		!"#$%&'()*+,-./
//58 - 64		:; <=> ? @
//91 - 96     [\] ^ _`
//123 - 126	{ | }~
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xd7'; // the character × (multiplication sign) in ISO-8859-1
    printf("In the default C locale, \\xd7 is %spunctuation\n",
        ispunct(c) ? "" : "not ");
    setlocale(LC_ALL, "en_GB");
    printf("In ISO-8859-1 locale, \\xd7 is %spunctuation\n",
        ispunct(c) ? "" : "not ");
}

//In the default C locale, \xd7 is not punctuation
//In ISO - 8859 - 1 locale, \xd7 is punctuation