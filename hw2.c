#include <stdio.h>

int main(void){
	
	float a,b;
	
	printf("Please enter kilometers: ");
	scanf("%f",&a);
	
	b = a / 1.609;
	
	printf("%.1f km is equal to %.1f miles.",a,b);
	
	return 0;
}
