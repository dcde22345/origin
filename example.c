#include <stdio.h>

int main(void){

    // sum2.c
    /*
    long n, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%ld", &n);
    while(n != 0){
        sum += n;
        scanf("%ld", &n);
    }
    printf("The sum is: %ld\n", sum);

    return 0;
    */
    

    //length.c
    char ch;
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n') {
        len++;
    }
    printf("Your message was %d character(s) long.\n", len);

    return 0;

}