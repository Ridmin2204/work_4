#include <stdio.h>

int main(int argc, char **argv) {
    if (argc != 2) return 1;
    int K;
    sscanf(argv[1], "%d", &K);
    double a[10], b[10];
    for (int i = 0; i < 10; ++i) scanf("%lf", &a[i]);
    K = (K % 10 + 10) % 10;
    for (int i = 0; i < 10; ++i)
        b[(i + K) % 10] = a[i];
    for (int i = 0; i < 10; ++i)
        printf("%.0f ", b[i]);
    printf("\n");
    return 0;
}

