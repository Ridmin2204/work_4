#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_NUMERIC, "C");
    double a[10], sum = 0.0;
    for (int i = 0; i < 10; ++i) {
        if (scanf("%lf", &a[i]) != 1) return 1;
        sum += a[i];
    }
    double avg = sum / 10.0;

    char buf[64];
    int n = snprintf(buf, sizeof(buf), "%.2f", avg);

    while (n > 0 && buf[n - 1] == '0') buf[--n] = '\0';
    if (n > 0 && buf[n - 1] == '.') buf[--n] = '\0';

    printf("%s\n", buf);
    return 0;
}


