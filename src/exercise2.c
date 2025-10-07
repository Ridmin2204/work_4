#include <stdio.h>

int main() {
    double a[10];
    for (int i = 0; i < 10; ++i) scanf("%lf", &a[i]);
    for (int i = 9; i >= 0; --i) printf("%.0f ", a[i]);
    printf("\n");
    return 0;
}

