#include <stdio.h>


int main(void)
{
  // int d, i1, i2, i3, i4, j1, j2, j3, j4, k1, k2, k3, k4,
  //     first_sum, second_sum, third_sum, total;

  // scanf("%1d", &d);
  // scanf("%1d%1d%1d%1d", &i1, &i2, &i3, &i4);
  // scanf("%1d%1d%1d%1d", &j1, &j2, &j3, &j4);
  // scanf("%1d%1d%1d%1d", &k1, &k2, &k3, &k4);
  // first_sum = d + i2 + i4 + j2 + j4;
  // second_sum = i1 + i3 + j1 + j3;
  // third_sum = k1 + k2 + k3 + k4;
  // total = 2 * first_sum + second_sum + third_sum;

  // printf("%d", 9 - ((total + 5) % 7));


  // printf("(a = (b -= (((c--) - (d++)) - (e / (f--) * (++g)))))");

  /* Computes a Universal Product Code check digit */

  int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12,
      first_sum, second_sum, total;

  printf("Enter the first 12 digits of an EAN:");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
  first_sum =  i2 + i4 + i6 + i8 + i10 + i12;
  second_sum = i1 + i3 + i5 + i7 + i9 + i11;
  total = 3 * first_sum + second_sum;

  printf("Check digit:%d", 9 - ((total - 1) % 10));

  // int first_digit, second_digit, third_digit;
  // printf("Enter a three-digit number:");
  // scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
  // printf("The reversal is %1d %1d %1d", third_digit, second_digit, first_digit);



  // int decimal_num, octal_num = 0, temp, count = 1;
  // printf("Enter a number between 0 and 32767:");
  // scanf("%d", &decimal_num);

  // while(decimal_num >= 8){
  //   temp = decimal_num % 8;
  //   octal_num += (temp * count);
  //   decimal_num = decimal_num / 8;
  //   count = count*10;
  // }
  // octal_num += (decimal_num * count);
  // printf("In octal, your number is:%05d", octal_num);
  return 0;
}
