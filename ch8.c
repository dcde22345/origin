#include <stdio.h>


int main(void){
    // int array[5], i;

    // for(i = 0; i < 5; i++)
    //     scanf("%d", &array[i]);
    // for(i = 0; i < 5; i++)
    //     printf("%d\n", array[i]);
    
    // return 0;


    // int a[N], i;

    // for (i = 0; i < N; i++)
    //     scanf("%d", &a[i]);

    // for (i = N - 1; i >= 0; i--)
    //     printf(" %d", a[i]);
    // printf("\n");

    // return 0;



    // bool digit_seen[10] = {false};
    // int digit;
    // long n;

    // printf("Enter a number: ");
    // scanf("%ld", &n);
    // while (n > 0) {
    //     digit = n % 10;
    //     if (digit_seen[digit])
    //     break;
    //     digit_seen[digit] = true;
    //     n /= 10;
    // }
    // if (n > 0)
    //     printf("Repeated digit\n");
    // else
    //     printf("No repeated digit\n");




    // int i, j, rate, years;
    // float money[5];
    // printf("Enter interest rate: ");
    // scanf("%d", &rate);
    // printf("Enter number of years: \n");
    // scanf("%d", &years);

    // for(i = 0; i<5; i++){
    //     money[i] = 100.00f;
    // }

    // printf("Years");
    // for(i = rate; i <= rate+4; i++){
    //     printf("%6d%%", i);
    // }
    // printf("\n");

    // for(i=1; i<=years; i++){
    //     printf("%3d    ", i);
    //     for(j=0; j<5; j++){
    //         money[j] = money[j] + (rate+j) * 0.01 * money[j];
    //         printf("%7.2f", money[j]);
    //     }
    //     printf("\n");
    // }



    // printf("Enter message: ");
    // char ch;
    // char answer[100];
    // int i = 0, j;

    // while(ch != '\n'){
    //     ch = getchar();
    //     if(ch >= 97 && ch <= 122){
    //         ch = ch - 32;
    //     }
    //     switch(ch){
    //         case 'A': answer[i] = '4'; break;
    //         case 'B': answer[i] = '8'; break;
    //         case 'E': answer[i] = '3'; break;
    //         case 'I': answer[i] = '1'; break;
    //         case 'O': answer[i] = '0'; break;
    //         case 'S': answer[i] = '5'; break;
    //         default: answer[i] = ch; break;
    //     }
    //     i++;
    // }
    // printf("In B1FF-speak: ");
    // for(j = 0; j < i - 1; j++){
    //     printf("%c", answer[j]);
    // }
    // printf("!!!!!!!!!!");

    // return 0;

    // int i = 5, j = 5;
    // int array[i][j];

    // for(i = 0; i < 5; i++){
    //     printf("Enter row %d: ", i + 1);
    //     for(j = 0; j < 5; j++){
    //         scanf("%d", &array[i][j]);
    //     }
    // }

    // int temp = 0;
    // printf("Row totals: ");
    // for(i = 0; i < 5; i++){
    //     temp = 0;
    //     for(j = 0; j <5; j++){
    //         temp += array[i][j];
    //     }
    //     printf("%d ", temp);
    // }

    // printf("\nColumn totals: ");
    // for(j = 0; j <5; j++){
    //     temp = 0;
    //     for(i = 0; i < 5; i++){
    //         temp += array[i][j];
    //     }
    //     printf("%d ", temp);
    // }







    char array[100], answer[20];
    char exclamation;
    int i = 0, j = 0;

    while(array[i - 1] != '\n'){
        array[i] = getchar();
        switch (array[i]){
        case '!': case '?': case '.':
            exclamation = array[i];
            break;
        default:
            i++;
            break;
        }
    }

    while(i >= 0){
        if(array[i] != ' ' || a){
            answer[j] = array[i];
            j++;
        }else{
            for(j -= 1; j >= 0; j--){
                if(answer[j] == '\n')
                    printf(" ");
                else
                    printf("%c", answer[j]);
            }
            printf(" ");
            j = 0;
        }
        i--;
    }
    printf("%c", exclamation);
}