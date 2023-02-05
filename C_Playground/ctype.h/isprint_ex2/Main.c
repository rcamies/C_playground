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
/* isprint example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";
    while (isprint(str[i]))
    {
        putchar(str[i]);
        i++;
    }
    return 0;
}

// first line