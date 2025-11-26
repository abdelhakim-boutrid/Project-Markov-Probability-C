#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

double* create_vector(int n) {
    double *v = calloc(n, sizeof(double));
    return v;
}

void print_vector(double *v, int n) {
    for(int i = 0; i < n; i++) printf("%.4lf ", v[i]);
    printf("\n");
}

void free_vector(double *v) {
    free(v);
}
