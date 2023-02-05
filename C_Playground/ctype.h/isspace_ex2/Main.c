/****************************************************/
/*													*/
//9             < tab > (\t)
//10 - 13		LF (\n), VT(\v), FF(\f), CR(\r)
//32            < space > (SP)
/****************************************************/
/* isspace example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int i = 0;
    char str[] = "Example sentence to test isspace\n";
    while (str[i])
    {
        c = str[i];
        if (isspace(c)) c = '\n';
        putchar(c);
        i++;
    }
    return 0;
}

//Example
//sentence
//to
//test
//isspace