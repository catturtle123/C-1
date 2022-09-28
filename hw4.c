#include <stdio.h>

int main(void){
	
	int a,i,j=0;
	
	printf("Please enter a number: ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		if(a%i==0){
			j++;
		}
	}
	
	if(j==2){
		printf("It is a prime number.");
	} else{
		printf("It is not a prime number");
	}
	
	
	
	return 0;
}
