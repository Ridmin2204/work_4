#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int k = atoi(argv[2]);
    int x = atoi(argv[1]);
    int array[10];
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
 }
    for(int i= 0; i < 9; ++i) {
        if (i==k){
            printf("%.2f", x);
        }
        printf("%.2f",array[i]);
    }

}
