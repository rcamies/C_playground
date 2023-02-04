/************************************************************************/
/*	assertions example 3												*/
/*  assert is only raised for strlen(string) > 2);                      */
/*  the other 2 (string != NULL and *string != "\0" do not raise assert */
/************************************************************************/
// crt_assert.c
// compile by using: cl /W4 crt_assert.c
#include <stdio.h>
#include <assert.h>
#include <string.h>

void analyze_string(char* string);   // Prototype

int main(void)
{
    char  test1[] = "abc";      // create string array
    char* test2 = NULL;         // create pointer to empty character
    char test3[] = "";          // create empty string array

    printf("Analyzing string '%s'\n", test1);
    fflush(stdout);             // clear outputbuffer
    analyze_string(test1);      // no failure: (!NULL, not '\0', strlen>2)
    printf("Analyzing string '%s'\n", test2);
    fflush(stdout);             // clear outputbuffer
    analyze_string(test2);      // no failure: (!NULL, not '\0', strlen>2)
    printf("Analyzing string '%s'\n", test3);
    fflush(stdout);             // clear outputbuffer
    analyze_string(test3);      // failure: string == NULL
}

// Tests a string to see if it is NULL,
// empty, or longer than 0 characters.
void analyze_string(char* string)
{
    assert((string != NULL));        // Cannot be NULL
    assert(*string != '\0');       // Cannot be empty
    assert(strlen(string) > 2);  // Length must exceed 2
}

