/****************************************************************************/
/* int isalnum ( int c );													*/
/* checks if character is alphanumeric: (0..9, a..z, A..Z)                  */
//48 - 57		0123456789
//65 - 70		ABCDEF
//71 - 90		GHIJKLMNOPQRSTUVWXYZ
//97 - 102	    abcdef
//103 - 122	    ghijklmnopqrstuvwxyz
/****************************************************************************/

#include <stdio.h>
#include <ctype.h>  //comntains isalnum() function

int main()
{
    int i;
    char str[] = "c3po...";
    i = 0;
    while (isalnum(str[i])) i++;
    printf("The first %d characters are alphanumeric.\n", i);
    return 0;
}