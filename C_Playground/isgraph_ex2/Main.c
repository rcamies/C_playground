/****************************************************/
/*													*/
//33 - 47		!"#$%&'()*+,-./
//48 - 57		0123456789
//58 - 64		:; <=> ? @
//65 - 70		ABCDEF
//71 - 90		GHIJKLMNOPQRSTUVWXYZ
//91 - 96[\] ^ _`
//97 - 102	abcdef
//103 - 122	ghijklmnopqrstuvwxyz
//123 - 126	{ | }~
/****************************************************/
/* isgraph example */
#include <stdio.h>
#include <ctype.h>
int main()
{
    FILE* pFile;
    int c;
    pFile = fopen("myfile.txt", "r");
    if (pFile)
    {
        do {
            c = fgetc(pFile);
            if (isgraph(c)) putchar(c);
        } while (c != EOF);
        fclose(pFile);
    }
}

// 