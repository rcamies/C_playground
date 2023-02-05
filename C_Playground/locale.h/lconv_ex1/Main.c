/****************************************************/
/*													*/
/****************************************************/
/* localeconv example */
#include <stdio.h>      /* printf */
#include <locale.h>     /* setlocale, LC_MONETARY, struct lconv, localeconv */

int main()
{
    setlocale(LC_ALL, "nl_NL");
    struct lconv* lc;
    lc = localeconv();
    printf("Local decimal_point: %s\n",  lc->decimal_point);
    printf("local thousands_sep: %s\n", lc->thousands_sep);
    printf("Local Currency Symbol: %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);
    return 0;
}