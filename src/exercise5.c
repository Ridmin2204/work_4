#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int mat1[10][3];
    int mat2[3][10];
    int mat3[10][10];
    for(int i = 0; i < 10; ++i) {
        for(int y = 0; y < 3; ++y){
            scanf("%lf",&mat1[i][y]);
        }
    }
    for(int i = 0; i < 3; ++i) {
        for(int y= 0; y < 10; ++y){
            scanf("%lf",&mat2[y][i]);
        }
    }
    for(int i = 0; i < 10; i++) 
        for(int j = 0; j < 10; j++) 
            for(int k = 0; k < 3; k++) 
                mat3[i][j] += mat1[i][k] * mat2[k][j];
   for(int i = 0; i < 10; i++){;
      for(int j = 0; j < 10; j++){
        printf("%.2f ", mat3[i][j]);
      } 
   }
}
            
