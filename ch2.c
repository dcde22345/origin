#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void)
{
//   float fahrenheit, celsius;

//   scanf("%f", &celsius);

//   fahrenheit = celsius / SCALE_FACTOR + FREEZING_PT;

//   printf("%.2f\n", fahrenheit);


    // int dollorAndCent;
    // float value;

    // scanf("%d", &dollorAndCent);

    // value = dollorAndCent * 1.05;
    
    // printf("%.2f", value);

    // int x, value;
    // scanf("%d", &x);
    // value = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;

    // printf("%d", value);

    // int dollor, twenty, ten, five;

    // scanf("%d", &dollor);

    // twenty = dollor / 20;
    // dollor -= 20 * twenty;
    // ten = dollor / 10;
    // dollor -= 10 * ten;
    // five = dollor  / 5;
    // dollor -= 5 * five;

    // printf("%d %d %d %d", twenty, ten, five, dollor);


    float loan, interest, payment;
    scanf("%f", &loan);
    scanf("%f", &interest);
    scanf("%f", &payment);

    for(int i = 1; i<3; i++){
        printf("$%.2f\n", loan * (1 + 0.01 * (interest / 12)) - payment);
        loan = loan * (1 + 0.01 * (interest / 12)) - payment;
    }
    loan = loan * (1 + 0.01 * (interest / 12)) - payment;
    printf("$%.2f", loan);

    // printf("\u3000\u3000\u3000\u3000\u3000_     v\n");
    // printf(" __\u3000\u3000 \uff0e\uff0e    |\n");
    // printf("|  |\u3000( ('') )\uff0f*\n");
    // printf("|__|__  /  \\ \uff0f\n");
    // printf("       /___ \\\n");
    // printf("       _/  |_");
    
    // float fahrenheit, celsius;

    // scanf("%f", &celsius);

    // fahrenheit = celsius * 9.0f / 5.0f + 32.0f;

    // printf("%.2f", fahrenheit);

    return 0;


}
