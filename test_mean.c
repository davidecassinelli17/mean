#include <stdio.h>
#include "mean.h"

int main() {
    int a = 4;
    int b = 4;
    float result;

    result = mean(a, b);

    printf("\nResult: %f", result);
}