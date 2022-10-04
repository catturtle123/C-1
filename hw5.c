#include <stdio.h>

void deToBi(int number){
	int b,c;
	b = number % 2;
	c = number/2;
	
	if(number<2) {
		printf("%d",number);
		return;
	} else{
		deToBi(c);
		printf("%d",b);
	}
}

int main(void){
	int a;
	
	printf("Please enter a number: ");
	scanf("%d",&a);	
	deToBi(a);

	return 0;
}
