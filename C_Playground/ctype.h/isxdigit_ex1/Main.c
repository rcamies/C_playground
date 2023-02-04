/****************************************************/
/*													*/
// 48-57		0123456789
// 65-70		ABCDEF
// 97-102	    abcdef
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    for (int ndx = 0; ndx <= UCHAR_MAX; ndx++)
        if (isxdigit(ndx)) printf("%c", ndx);
    printf("\n");
}

// 0123456789ABCDEFabcdef