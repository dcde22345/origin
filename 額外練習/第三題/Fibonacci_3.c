#include <stdio.h>

int fibo(int n1, int n2, int n3, int n4, int n, int t){
    if(n == t+3){
        printf("%d", n4 + n3 - n1 * 2);
        return 0;
    }

    return fibo(n2, n3, n4, n4 + n3 - n1 * 2, n+1, t);
}
int main(void){
    int n1, n2,n3,n4, t;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &t);
    if(t < 0){
        printf("error");
        return 0;
    }
    fibo(n1, n2, n3, n4, 4, t);
    return 0;
}