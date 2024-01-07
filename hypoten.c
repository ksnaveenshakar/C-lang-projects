#include <stdio.h>
#include <math.h>

int main(){

    double A;
    double B;
    double C;

    printf("\nEnter the side A:");
    scanf("%lf",&A);

    printf("\nEnter the side B:");
    scanf("%lf",&B);

    C = sqrt(A*A + B*B);

    printf("\nThe hypoten of the side a and b is %lf",C);

    return 0;
}