/****************************************************/
/*													*/
// 48-57		0123456789
/****************************************************/
/* isdigit example */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char str[] = "1776ad";
    int year;
    if (isdigit(str[0]))
    {
        year = atoi(str);
        printf("The year that followed %d was %d.\n", year, year + 1);
    }
    return 0;
}

// The year that followed 1776 was 1777.