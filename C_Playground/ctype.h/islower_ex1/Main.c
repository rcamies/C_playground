/****************************************************/
/*													*/
// 97-102	    abcdef
// 103 - 122	ghijklmnopqrstuvwxyz
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\xe5'; // letter å in ISO-8859-1
    printf("In the default C locale, \\xe5 is %slowercase\n",
        islower(c) ? "" : "not ");
    setlocale(LC_ALL, "en_GB");
    printf("In ISO-8859-1 locale, \\xe5 is %slowercase\n",
        islower(c) ? "" : "not ");
}

//In the default C locale, \xe5 is not lowercase
//In ISO - 8859 - 1 locale, \xe5 is lowercase

