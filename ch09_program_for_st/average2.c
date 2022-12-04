#include <stdio.h>

float average(float a, float b, float c, float d){
	return (a + b + c + d)/4;
}

int main(void){

	float i1,i2,i3,i4;

	scanf("%f %f %f %f", &i1, &i2, &i3, &i4);
	printf("%.2f", average(i1, i2, i3, i4));
	
	return 0;
}

