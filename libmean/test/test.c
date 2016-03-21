#include <stdio.h>

#include "calc_mean/calc_mean.h"

int main(void)
{
    double a=10, b=4, m;

    m = mean(a,b);
    printf("MEAN: %f\n", m);

    return 0;
}
