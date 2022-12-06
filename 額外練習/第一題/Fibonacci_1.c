#include <stdio.h>

int fibo(int n1, int n2, int n){
    if(n > 6)
        return 0;

    printf("%d\n", n1 + n2);
    return fibo(n2, n1+n2, n+1);
}
int main(void){
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    fibo(n1, n2, 2);

    return 0;
}