/****************************************************/
/*													*/
/****************************************************/
/* toupper example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0;
    char str[] = "Test String.\n";
    char c;
    while (str[i])
    {
        c = str[i];
        putchar(toupper(c));
        i++;
    }
    return 0;
}

//TEST STRING.