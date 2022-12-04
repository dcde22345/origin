#include <stdio.h>

int main(void)
{
    // float share, price, commission, value, rivalCommission;

    // printf("Enter the number of shares: ");
    // scanf("%f", &share);
    // printf("Enter price per share: ");
    // scanf("%f", &price);

    // value = share * price;

    // if (value < 2500.00f)
    //     commission = 30.00f + .017f * value;
    // else if (value < 6250.00f)
    //     commission = 56.00f + .0066f * value;
    // else if (value < 20000.00f)
    //     commission = 76.00f + .0034f * value;
    // else if (value < 50000.00f)
    //     commission = 100.00f + .0022f * value;
    // else if (value < 500000.00f)
    //     commission = 155.00f + .0011f * value;
    // else
    //     commission = 255.00f + .0009f * value;

    // if (commission < 39.00f)
    //     commission = 39.00f;

    // if(share < 2000){
    //     rivalCommission = 33 + 0.03 * share;
    // }else{
    //     rivalCommission = 33 + 0.02 * share;
    // }

    // printf("Original broker's commission: $%.2f\n", commission);
    // printf("Rival broker's commission: $%.2f", rivalCommission);


    // char alphabet;
    // scanf("%c", &alphabet);

    // switch(alphabet){
    //     // case 1: printf("January"); break;
    //     // case 2: printf("February"); break;
    //     // case 3: printf("March"); break;
    //     // case 4: printf("April"); break;
    //     // case 5: printf("May"); break;
    //     // case 6: printf("June"); break;
    //     // case 7: printf("July"); break;
    //     // case 8: printf("August"); break;
    //     // case 9: printf("September"); break;
    //     // case 10: printf("October"); break;
    //     // case 11: printf("November"); break;
    //     // case 12: printf("December"); break;
    //     // default: printf("error");
    //     case 'A': case 'a': printf("Apple"); break;
    //     case 'B': case 'b': printf("Banana"); break;
    //     case 'C': case 'c': printf("Cherry"); break;
    //     case 'D': case 'd': printf("Durian"); break;
    //     case 'E': case 'e': printf("Egg"); break;
    //     case 'F': case 'f': printf("Fish"); break;
    //     default: printf("Error"); break;
    // }

//     float shareNum, price, commission, rivalCommission, value;

//     printf("Enter the number of shares: ");
//     scanf("%f", &shareNum);
//     printf("Enter price per share: ");
//     scanf("%f", &price);
//     value = shareNum * price;

//     if (value < 2500.00f)
//         commission = 30.00f + .017f * value;
//     else if (value < 6250.00f)
//         commission = 56.00f + .0066f * value;
//     else if (value < 20000.00f)
//         commission = 76.00f + .0034f * value;
//     else if (value < 50000.00f)
//         commission = 100.00f + .0022f * value;
//     else if (value < 500000.00f)
//         commission = 155.00f + .0011f * value;
//     else
//         commission = 255.00f + .0009f * value;

//     if (commission < 39.00f)
//         commission = 39.00f;

//     if(shareNum < 2000.00f)
//         rivalCommission = 33.00f + .03f * shareNum;
//     else
//         rivalCommission = 33.00f + .02f * shareNum;

//   printf("Original broker's commission: $%.2f\n", commission);
//   printf("Rival broker's commission: $%.2f", rivalCommission);



    // int speed;

    // printf("Enter wind speed (knots): ");
    // scanf("%d", &speed);

    // printf("Wind force at %d knots is ", speed);

    // if(speed < 1)
    //     printf("Calm");
    // else if(speed >= 1 && speed < 4)
    //     printf("Light air");
    // else if(speed >= 4 && speed < 28)
    //     printf("Breeze");
    // else if(speed >= 28 && speed < 48)
    //     printf("Gale");
    // else if(speed >= 48 && speed <=63)
    //     printf("Storm");
    // else
    //     printf("Hurricane");


    // float income;
    // printf("Enter amount of taxable income: ");
    // scanf("%f", &income);

    // printf("Tax due is: $");
    // if(income <= 750)
    //     printf("%.2f", income * 0.01);
    // else if(income > 750 && income <= 2250)
    //     printf("%.2f", 7.50f + (income - 750) * 0.02);
    // else if(income > 2250 && income <= 3750)
    //     printf("%.2f", 37.50f + (income - 2250) * 0.03);
    // else if(income > 3750 && income <= 5250)
    //     printf("%.2f", 82.50f + (income - 3750) * 0.04);
    // else if(income > 5250 && income <=7000)
    //     printf("%.2f", 142.50f + (income - 5250) * 0.05);
    // else
    //     printf("%.2f", 230.00f + (income - 7000) * 0.06);

    // int grade;
    // printf("Enter a numerical grade: ");
    // scanf("%d", &grade);

    // printf("Letter grade: ");
    // switch(grade / 10){
    //     case 10: case 9:
    //         printf("A");
    //         break;
    //     case 8:
    //         printf("B");
    //         break;
    //     case 7:
    //         printf("C");
    //         break;
    //     case 6:
    //         printf("D");
    //         break;
    //     default:
    //         printf("F");
    // }


    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a == 0 || b == 0 || c == 0){
        printf("0");
        return 0;
    }

    if(a > b)
        if(a > c)
            if( b*b + c*c == a*a)
                printf("%d", a);
            else
                printf("0");
        else
            if( a*a + b*b == c*c)
                printf("%d", c);
            else
                printf("0");
    else
        if(b > c)
            if( a*a + c*c == b*b)
                printf("%d", b);
            else
                printf("0");
        else
            if( a*a + b*b == c*c)
                printf("%d", c);
            else
                printf("0");

//   int month, day, year;

//   printf("Enter date (mm/dd/yy): ");
//   scanf("%d /%d /%d", &month, &day, &year);

//   printf("Dated this %d", day);
//   switch (day) {
//     case 1: case 21: case 31:
//       printf("st"); break;
//     case 2: case 22:
//       printf("nd"); break;
//     case 3: case 23:
//       printf("rd"); break;
//     default: printf("th"); break;
//   }
//   printf(" day of ");

//   switch (month) {
//     case 1:  printf("January");   break;
//     case 2:  printf("February");  break;
//     case 3:  printf("March");     break;
//     case 4:  printf("April");     break;
//     case 5:  printf("May");       break;
//     case 6:  printf("June");      break;
//     case 7:  printf("July");      break;
//     case 8:  printf("August");    break;
//     case 9:  printf("September"); break;
//     case 10: printf("October");   break;
//     case 11: printf("November");  break;
//     case 12: printf("December");  break;
//   }

//   printf(", 20%.2d.\n", year);


    // int number;
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // if(number >= 1 && number <= 9999){
    //     int temp = number, count = 1;

    //     while(temp / 10 != 0){
    //         temp /= 10;
    //         count++;
    //     }

    //     printf("The number %d has %d ", number, count);
    //     if(count == 1){
    //         printf("digit");
    //     }else{
    //         printf("digits");
    //     }
    // }else{
    //     printf("Please enter the whole between 1 and 9999");
    // }




    // int hour, min;
    // printf("Enter a 24-hour time: ");
    // scanf("%d:%d", &hour, &min);
    
    // if(hour >= 0 && hour <= 24){
    //     if(hour == 24 && min >= 00){
    //         printf("Not the correct time format");
    //     }else{
    //         printf("Equivalent 12-hour time: ");
    //         if(hour % 12 == 0)
    //             printf("12:%0.2d ", min);
    //         else
    //             printf("%d:%0.2d ", hour % 12, min);

    //         if(hour / 12 % 2 == 0)
    //             printf("AM");
    //         else
    //             printf("PM");
    //     }
    // }else
    //     printf("Not the correct time format");


    return 0;
}
