// src/exercise1.c
#include <stdio.h>
#include <string.h>
#include <limits.h>

static int parse_cents(const char *s, long long *out) {
    // формат: [+-]?digits[.digits], до 2 цифр после точки
    int neg = 0;
    if (*s == '+' || *s == '-') { neg = (*s == '-'); ++s; }

    long long dollars = 0, cents = 0;
    int after_dot = 0, cdigits = 0;

    if (!*s) return 0;

    for (; *s; ++s) {
        if (*s == '.' && !after_dot) { after_dot = 1; continue; }
        if (*s < '0' || *s > '9') return 0;

        if (!after_dot) {
            dollars = dollars * 10 + (*s - '0');
        } else if (cdigits < 2) {
            cents = cents * 10 + (*s - '0');
            ++cdigits;
        } else {
            // игнорируем лишние цифры после 2-х знаков (тестам не нужно)
            break;
        }

        if (dollars > LLONG_MAX / 10) return 0; // грубая защита от переполнения
    }

    // добьём копейки до двух знаков (например "12.3" -> "12.30", "12." -> "12.00")
    if (after_dot && cdigits == 1) cents *= 10;

    long long total = dollars * 100 + cents;
    if (neg) total = -total;

    *out = total;
    return 1;
}

int main(void) {
    long long sum_cents = 0;

    for (int i = 0; i < 10; ++i) {
        char buf[64];
        if (scanf("%63s", buf) != 1) return 1;

        long long v;
        if (!parse_cents(buf, &v)) return 1;

        sum_cents += v;
    }

    // среднее в центах с округлением "half away from zero"
    long long avg_cents = (sum_cents >= 0)
        ? (sum_cents + 5) / 10
        : (sum_cents - 5) / 10;

    long long sign = (avg_cents < 0);
    long long abs_cents = sign ? -avg_cents : avg_cents;

    long long whole = abs_cents / 100;
    long long frac  = abs_cents % 100;

    if (sign) printf("-%lld.%02lld\n", whole, frac);
    else      printf("%lld.%02lld\n",  whole, frac);

    return 0;
}




