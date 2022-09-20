#include <stdio.h>

int main(void){
	int height,length, width, volume, weight, inches_per_pound;

	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height*length*width;
	printf("Enter inches_per_pound: ");
	scanf("%d", &inches_per_pound);
	weight = (volume+inches_per_pound-1) / inches_per_pound;

	printf("%d", weight);

	return 0;
}