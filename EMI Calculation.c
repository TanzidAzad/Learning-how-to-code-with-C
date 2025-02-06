#include <stdio.h>
#include <math.h>

int main(void)

{
    double p, r, n, EMI;

    printf("Enter your loan amount: ");
    scanf("%lf", &p);

     printf("Enter your monthly interest rate: ");
    scanf("%lf", &r);

    printf("Enter your loan tenure: ");
    scanf("%lf", &n);

    EMI = (p * r * pow((1+r),n))/ (pow((1+r),n) - 1);

    printf("Your EMI is: %.2lf", EMI);
}
