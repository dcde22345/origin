#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    char ch;
    char answer[100];
    int i = 0;
    while(ch != '\n'){
        ch = toupper(getchar());
        switch(ch){
            case 'A': answer[i] = "4"; break;
            case 'B': printf("8"); break;
            case 'E': printf("3"); break;
            case 'I': printf("1"); break;
            case 'O': printf("0"); break;
            case 'S': printf("5"); break;
            case '\n':
            default: printf("%c", ch); break;
        }
        i++;
    }
    printf("%s", answer);

    return 0;
}
