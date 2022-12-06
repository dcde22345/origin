#include <stdio.h>

int fibo(int n1, int n2, int n, int t){
    if(n == t+1){
        printf("%d", n1 + n2);
        return 0;
    }

    return fibo(n1, n1+n2, n+1, t);
}
int main(void){
    int n1, n2, t;
    scanf("%d %d %d", &n1, &n2, &t);

    fibo(n1, n2, 2, t);
    return 0;
}