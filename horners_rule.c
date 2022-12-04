#include <stdio.h>

void horner(int list[], int n, int x, int answer){
    if(n==0){
        printf("%d",answer+list[n]);
    }else{
        answer = (answer + list[n]) * x;
        horner(list, n-1, x, answer);
    }
}

int main(void){
    int list[] = {1,2,3,4};
    int answer = 0;
    horner(list, 3, 5, answer);
    printf("%d",answer);
    return 0;
}