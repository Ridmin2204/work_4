#include <stdio.h>

int main() {
    double A[10][3], B[3][10], C[10][10] = {0};
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 3; ++j)
            scanf("%lf", &A[i][j]);

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 10; ++j)
            scanf("%lf", &B[i][j]);

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            for (int k = 0; k < 3; ++k)
                C[i][j] += A[i][k] * B[k][j];

    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j)
            printf("%.0f ", C[i][j]);
    printf("\n");
    return 0;
}

