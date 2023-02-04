/****************************************************/
/*													*/
//0 - 8		NUL, SOH, STX, ETX, EOF, ENQ, ACK, BEL, BS
//9 < tab > (\t)
//10 - 13		LF, VT, FF, CR
//14 - 31		SO, SI, DLE, DC1, DC2, DC3, DC4, NAK, SYN, ETB, CAN, EM, SUB, ESC, FS, GS, RS, US
//127 < DEL >
/****************************************************/
#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void)
{
    unsigned char c = '\x94'; // the control code CCH in ISO-8859-1
    printf("In the default C locale, \\x94 is %sa control character\n",
        iscntrl(c) ? "" : "not ");
    setlocale(LC_ALL, "en_GB");
    printf("In ISO-8859-1 locale, \\x94 is %sa control character\n",
        iscntrl(c) ? "" : "not ");
}

//In the default C locale, \x94 is not a control character
//In ISO - 8859 - 1 locale, \x94 is not a control character