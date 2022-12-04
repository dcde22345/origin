#include <stdio.h>

int main(void){
    float num1,num2, sum;

    printf("Enter num1: ");
    scanf("%f", &num1);

    printf("Enter num2: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("the sum is: %-8.3f.", sum);

    return 0;
}