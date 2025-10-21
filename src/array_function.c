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

void join_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    for (size_t i = 0; i < size_src1; ++i) {
        dest[i] = src1[i];
    }
    for (size_t j = 0; j < size_src2; ++j) {
        dest[size_src1 + j] = src2[j];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    size_t i = 0, j = 0, k = 0;
    while (i < size_src1 && j < size_src2) {
        if (src1[i] <= src2[j]) dest[k++] = src1[i++];
        else                    dest[k++] = src2[j++];
    }
    while (i < size_src1) dest[k++] = src1[i++];
    while (j < size_src2) dest[k++] = src2[j++];
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    int mn = src[0], mx = src[0];
    for (size_t i = 1; i < size; ++i) {
        if (src[i] < mn) mn = src[i];
        if (src[i] > mx) mx = src[i];
    }
    *min = mn;
    *max = mx;
}


