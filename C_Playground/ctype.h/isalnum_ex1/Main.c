/****************************************************************************/
/* int isalnum ( int c );													*/
/* checks if character is alphanumeric: (0..9, a..z, A..Z)                  */
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