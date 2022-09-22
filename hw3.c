#include <stdio.h>

int main(void){
	
	int i,j,o;
	
	for(i=1;i<=9;i+=2){
		
		for(j=1;j<=9-i;j+=2){
			printf(" ");
		}
		
		for(o=1;o<=i;o++){
			
			printf("*");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
