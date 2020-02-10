#include <stdio.h>

#include "dk_tool.h"

int main() {
    float num_A, num_C, rez_Q;
    int num_B;

    scanf("%f", &num_A);
    scanf("%d", &num_B);
    scanf("%f", &num_C);

    double sum1 = dk_sum(dk_pow(num_A, 2), dk_pow(num_B, 2));
    double sum2 = dk_sum(num_B, dk_pow(5, num_C));

    int chk_fact = dk_factorial(num_B);


    rez_Q = dk_factorial(num_B);
    rez_Q += dk_div(sum1, sum2);

    if (chk_fact == -1)
    {
        printf("ERROR!");
    }
    else
    {
        printf("%.2f", rez_Q);
    }

    return 0;
}