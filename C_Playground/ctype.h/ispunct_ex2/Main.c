/****************************************************/
/*													*/
//33 - 47		!"#$%&'()*+,-./
//58 - 64		:; <=> ? @
//91 - 96     [\] ^ _`
//123 - 126	{ | }~
/****************************************************/
/* ispunct example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    int i = 0;
    int cx = 0;
    char str[] = "Hello, welcome!";
    while (str[i])
    {
        if (ispunct(str[i])) cx++;
        i++;
    }
    printf("Sentence contains %d punctuation characters.\n", cx);
    return 0;
}

// Sentence contains 2 punctuation characters.