#include <stdio.h>

int main(void) {
    long double x, sum = 0.0L;
    for (int i = 0; i < 10; ++i) {
        if (scanf("%Lf", &x) != 1) return 1;
        sum += x;
    }

    long double avg = sum / 10.0L;

    long double cents_f = avg * 100.0L;
    long double eps = 1e-12L * (cents_f >= 0.0L ? 1.0L : -1.0L);
    cents_f += eps;
    long long cents = (long long)(cents_f + (cents_f >= 0.0L ? 0.5L : -0.5L));

    if (cents < 0) { putchar('-'); cents = -cents; }
    long long whole = cents / 100;
    long long frac  = cents % 100;
    printf("%lld.%02lld\n", whole, frac);
    return 0;
}



