#include <stdio.h>

int main(void){
	int i;
	int a[5];
	
	printf("Please input five integers:");
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	printf("\n");
	printf("Odd numbers: ");
	for(i=0;i<=4;i++){
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
	
	printf("\n");
	
	printf("Even numbers: ");
	for(i=0;i<=4;i++){
		if( a[i] % 2 == 0){
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
