#include <stdio.h>
#define PI 3.14159f

int main(void){
    // int n, i, temp = 0;
    
    // i=1;
    // // while (i < n) {
	// //     i = i * 3;
    // //     printf("%d\n", i);
	// // }
    // scanf("%d", &n);
    // while(i<=n){
    //     temp += i;
    //     i++;
    // }
    // printf("%d", temp);

    // float radius, volume;

    // scanf("%f", &radius);

    // volume = 4.0f / 3.0f * PI * radius * radius * radius;

    // printf("%.2f", volume);

//       int i, n;
  
//   printf("Enter number of entries in table: ");
//   scanf("%d", &n);

//   i = 1;
//   while (i <= n) {
//     printf("%10d%10d%10d\n", i, i * 2, i*3);
//     i++;
//   }

//   int sum = 0, n;
	
//   printf("Enter a nonnegative integer: ");
//   scanf("%d", &n);
	
//   do {
//     sum += n % 10;
//     n /= 10;
//   } while (n > 0);
	
//   printf("%d", sum);



// printf("    *\n   ***\n  *****\n *******\n  *****\n *******\n*********\n    *\n    *");

//   int i, j, n;
  
//   scanf("%d", &n);

//   for(i = 1 ; i<n; i++){
//     for(j = 1; j <= i; j++)
//         printf("*");
//     printf("\n");
//   }
//     for(j = 1; j <= n; j++)
//         printf("*");


    // int cmd;
    // float balance = 0.0f, credit, debit;
    // printf("*** ACME checkbook-balancing program ***\nCommands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");
    // for(;;){
    //     printf("Enter command: ");
    //     scanf("%d", &cmd);
    //     switch(cmd){
    //         case 0:
    //             balance = 0.0f;
    //             break;
    //         case 1:
    //             printf("Enter amount of credit: ");
    //             scanf("%f", &credit);
    //             balance += credit;
    //             break;
    //         case 2:
    //             printf("Enter amount of debit: ");
    //             scanf("%f", &debit);
    //             balance -= debit;
    //             break;
    //         case 3:
    //             printf("Current balance: $%.2f\n", balance);
    //             break;
    //         case 4:
    //             return 0;
    //         default:
    //             break;
    //     }
    // }   



    //------------------------------------ Homework -------------------------------------


    // float num, temp = 0;


    // while(1){
    //     printf("Enter a number (enter 0 to end): ");
    //     scanf("%f", &num);
    //     if(num == 0){
    //         printf("The largest number entered was %.2f", temp);
    //         return 0;
    //     }
    //     if(temp < num)
    //         temp = num;
    // }


    // int m, n, temp;
    // printf("Enter two integers: ");
    // scanf("%d %d", &m, &n);

    // if(n == 0){
    //     printf("m contains the GCD.");
    //     return 0;
    // }
    
    // while(n != 0){
    //     temp = m%n;
    //     m = n;
    //     n = temp;
    // }

    // printf("Greatest common divisor: %d", m);




    // int i, n;
    
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);

    // i = 1;
    // while (i <= n) {
    //     printf("%10d%10d\n", i, i * i);
    //     i++;
    // }




    // int n, i;

    // scanf("%d\n", &n);

    // for(i = 1; i * i <= n; i++)
    //     if(i * i % 2 == 0)
    //         printf("%d\n", i * i);
    




    // int n, i, j;
    // scanf("%d", &n);

    // for(i=1; i<=n; i++){
    //     for(j=0; j<i; j++)
    //         printf("*");
    //     printf("\n");
    // }





    // int answer, lowest = 0, highest = 100, num;
    // printf("Enter the answer number(%d-%d):", lowest, highest);
    // scanf("%d", &answer);
    // printf("\n\nGame start!\n\n\n");

    // while(1){
    //     printf("Enter a number(%d-%d): ", lowest, highest);
    //     scanf("%d", &num);
    //     if(num > answer)
    //         highest = num;
    //     else if(num < answer)
    //         lowest  = num;
    //     else{
    //         printf("BANG!");
    //         break;
    //     }
    // }




    // int n, sum = 0;
    
    // printf("This program sums a series of integers.\n");
    // printf("Enter integers (0 to terminate): ");

    // scanf("%d", &n);
    // while (n != 0) {
    //     sum += n;
    //     scanf("%d", &n);
    // }
    // printf("The sum is: %d\n", sum);




    // int x, y, GCDx,GCDy, temp;
    // printf("Enter a fraction (x/y): ");
    // scanf("%d/%d", &x, &y);
    
    // GCDx = x;
    // GCDy = y;

    // while(GCDy != 0){
    //     temp = GCDx%GCDy;
    //     GCDx = GCDy;
    //     GCDy = temp;
    // }

    // printf("GCD = %d\n", GCDx);
    // printf("In lowest terms: %d/%d", x / GCDx, y / GCDx);





    // int n, temp = 0;

    // while(1){
    //     scanf("%d", &n);
    //     if(n > 0)
    //         temp += n;
    //     else if(n == 0){
    //         printf("%d", temp);
    //         break;
    //     }
    // }




    // int digits = 0, n;
	
    // printf("Enter a nonnegative integer: ");
    // scanf("%d", &n);
        
    // do {
    //     n /= 10;
    //     digits++;
    // } while (n > 0);
        
    // printf("The number has %d digit(s).\n", digits);



    // int days, startingDay, i;
    // scanf("%d", &days);
    // scanf("%d", &startingDay);

    // for(i = 0; i < startingDay; i++)
    //     printf("  ");

    // for(i = 1; i <= days; i++){
    //     printf("%2d ", i);
    //     if((i + startingDay - 1) % 7 == 0)
    //         printf("\n");
    // }

    // int i, n;
  
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    //     printf("%10d%10d\n", i, i * i);





    int n, i;
    float e = 1.0f, temp = 1.0f, factorialReverse;
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        temp *= i;
        factorialReverse = 1 / temp;
        e += factorialReverse;
    }

    printf("%.4f", e);




    // int i, n, odd, square;
  
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d", &n);

    // i = 1;
    // odd = 3;
    // for (square = 1; i <= n; odd += 2) {
    //     printf("%10d%10d\n", i, square);
    //     ++i;
    //     square += odd;
    // }


    // int cmd;
    // float balance = 0.0f, credit, debit;

    // printf("*** ACME checkbook-balancing program ***\n");
    // printf("Commands: 0=clear, 1=credit, 2=debit, ");
    // printf("3=balance, 4=exit\n\n");
    // for (;;) {
    //     printf("Enter command: ");
    //     scanf("%d", &cmd);
    //     switch (cmd) {
    //         case 0:
    //             balance = 0.0f;
    //             break;
    //         case 1:
    //             printf("Enter amount of credit: ");
    //             scanf("%f", &credit);
    //             balance += credit;
    //             break;
    //         case 2:
    //             printf("Enter amount of debit: ");
    //             scanf("%f", &debit);
    //             balance -= debit;
    //             break;
    //         case 3:
    //             printf("Current balance: $%.2f\n", balance);
    //             break;
    //         case 4:
    //             return 0;
    //         default:
    //             printf("Commands: 0=clear, 1=credit, 2=debit, ");
    //             printf("3=balance, 4=exit\n\n");
    //             break;
    //     }
    // }

    return 0;
}