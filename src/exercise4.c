#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 3) return 1;
    double X;
    int K;
    sscanf(argv[1], "%lf", &X);
    sscanf(argv[2], "%d", &K);
    double a[10];
    for (int i = 0; i < 10; ++i) scanf("%lf", &a[i]);
    for (int i = 9; i > K; --i)
        a[i] = a[i - 1];
    a[K] = X;
    for (int i = 0; i < 10; ++i)
        printf("%.0f ", a[i]);
    printf("\n");
    return 0;
}

