#include <stdio.h>
#include <stdlib.h>
 
int main(void){
	printf("AIB109145 蔡世玄\n\n\n");
	
	int n;

	printf("Type in the height of your triangle you want: ");
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		
		for(int j=0; j<n-i;j++){
			printf(" ");
		}
		for(int j=0; j<1+(2*i); j++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}