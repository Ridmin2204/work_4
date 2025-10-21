#include <stddef.h>
#include "array_function.h"
void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }
    for (size_t j = 0; j < size_src2; ++j) {
        dest[size_src1 + j] = src2[j];
    }
}



