/****************************************************/
/*													*/
// 48-57		0123456789
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    for (int ndx = 0; ndx <= UCHAR_MAX; ndx++)
        if (isdigit(ndx)) printf("%c", ndx);
    printf("\n");
}

// 0123456789
