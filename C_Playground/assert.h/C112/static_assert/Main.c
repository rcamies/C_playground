/************************************************************************/
/*	static_assert(<expression>, <message>								*/
/*                                                                      */
/*  since C11.convenience macro expanding to keyword _Static_assert     */
/*     <expression>:    integer constant expression                     */
/*     <message>:       any string literal                              */
/*                                                                      */
/*  generates compile-time error if false                               */
/************************************************************************/
#include <stdio.h>
#include <assert.h>     // not needed since C23

int main(void)
{
    // tst if math works.
    static_assert(2 + 2 == 4, "2+2 isn't 4");      // well-formed. 2+2 indeed equals 4

    // produces error at compile-time
    static_assert(sizeof(int) < sizeof(char),     
        "this program requires that int is less than char"); // compile-time error (32 > 8)
}