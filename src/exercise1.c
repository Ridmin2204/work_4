#include <stdio.h>

int main() {
    double a[10], sum = 0;
    for (int i = 0; i < 10; ++i) scanf("%lf", &a[i]);
    for (int i = 0; i < 10; ++i) sum += a[i];
    printf("%.2f\n", sum / 10.0);
    return 0;
}

