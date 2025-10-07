// src/exercise1.c
#include <stdio.h>

int main(void) {
    double x, sum = 0.0;
    for (int i = 0; i < 10; ++i) {
        if (scanf("%lf", &x) != 1) return 1;
        sum += x;
    }
    // avg * 100 == (sum/10) * 100 == sum * 10  (меньше погрешность)
    double scaled = sum * 10.0;
    long long cents = (long long)(scaled + (scaled >= 0.0 ? 0.5 : -0.5));

    // вывод строго с двумя знаками
    long long abs_cents = (cents < 0) ? -cents : cents;
    long long whole = abs_cents / 100;
    long long frac  = abs_cents % 100;

    if (cents < 0) printf("-%lld.%02lld\n", whole, frac);
    else           printf("%lld.%02lld\n",  whole, frac);
    return 0;
}




