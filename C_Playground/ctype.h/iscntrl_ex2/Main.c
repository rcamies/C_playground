/****************************************************/
/*													*/
//0 - 8		NUL, SOH, STX, ETX, EOF, ENQ, ACK, BEL, BS
//9 < tab > (\t)
//10 - 13		LF, VT, FF, CR
//14 - 31		SO, SI, DLE, DC1, DC2, DC3, DC4, NAK, SYN, ETB, CAN, EM, SUB, ESC, FS, GS, RS, US
//127 < DEL >
/****************************************************/
/* iscntrl example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0;
    char str[] = "first line \n second line \n";
    while (!iscntrl(str[i]))
    {
        putchar(str[i]);
        i++;
    }
    return 0;
}

// first line