#include <stdio.h>

int main(){
    int height, length, width, weight;
    int inches_per_pound=100;

    height=12;
    length=14;
    width=11;
    weight = height*length*width/inches_per_pound;

    printf("%d",weight);    

    return 0;
}