#include <stdio.h>

int main(void){

    
    int array[4][4], i, j, temp = 0;

    for(i = 0; i<4; i++){
        for(j=0; j<4; j++){
            scanf("%d", &array[i][j]);
            printf("%2d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\nRow sums: ");

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            temp += array[i][j];
        }
        printf("%d ", temp);
        temp = 0;
    }

    printf("\nColumn sums: ");

    for(j=0; j<4; j++){
        for(i=0; i<4; i++){
            temp += array[i][j];
        }
        printf("%d ", temp);
        temp = 0;
    }

    printf("\nDiagonal sums: ");

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i == j){
                temp += array[i][j];
            }
        }
    }
    
    printf("%d ", temp);
    temp = 0;

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(i+j == 3){
                temp += array[i][j];
            }
        }
    }

    printf("%d", temp);
    

    /*  08
    int number, month, date, year;
    float price;

    scanf("%d", &number);
    scanf("%f", &price);
    scanf("%d/%d/%d", &month, &date, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-5d\t$%-7.2f\t%0.2d/%0.2d/%d", number, price, month, date, year);
    */

    /*  09
    int a, b, c;
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("You entered %0.2d.%4d.%4d", a, b, c);
    */
    
    return 0;
}