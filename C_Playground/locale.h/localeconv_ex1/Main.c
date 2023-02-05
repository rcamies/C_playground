/****************************************************/
/*													*/
/****************************************************/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_MONETARY, "en_IN.UTF-8");
    struct lconv* lc = localeconv();
    printf("Local Currency Symbol        : %s\n", lc->currency_symbol);
    printf("International Currency Symbol: %s\n", lc->int_curr_symbol);
}

//Local Currency Symbol : ?
//International Currency Symbol : INR