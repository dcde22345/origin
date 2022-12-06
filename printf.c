#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char array[80];
    printf("Enter");
    scanf("%s", array);
    for(int i = 0; i >= 0;i++){
        if(array[i] == 0)
            break;
        printf("%c", array[i]);
    }
    
    return 0;
}
