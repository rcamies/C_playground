/****************************************************/
/*													*/
//9             < tab > (\t)
//10 - 13		LF (\n), VT(\v), FF(\f), CR(\r)
//32            < space > (SP)
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void)
{
    for (int ndx = 0; ndx <= UCHAR_MAX; ndx++)
        if (isspace(ndx)) printf("0x%02x ", ndx);
}

// 0x09 0x0a 0x0b 0x0c 0x0d 0x20