#include <stdio.h>

int main(void){
	int arr1[6] = {1,2,3,4,5,6};
	int arr2[6] = {7,8,9,10,11,12};
	int arr3[6];
	int * ptr1 = arr1;
	int * ptr2 = arr2;
	int * ptr3 = arr3;
	int i;
	int * temp;
	
	printf("arr1: ");
	for(i=0;i<6;i++){
		printf("%d ",arr1[i]);
	}
	
	printf("\n");
	printf("arr2: ");
	for(i=0;i<6;i++){
		printf("%d ",arr2[i]);
	}
	printf("\n\n");
	
	for(i=0;i<6;i++){
		arr3[i] = (*ptr1 + i);
	}
	
	for(i=0;i<6;i++){
		arr1[i] = (*ptr2 + i);
	}
	
	for(i=0;i<6;i++){
		arr2[i] = (*ptr3 + i);
	}
	
	printf("after swap\n");
	printf("arr1: ");
	for(i=0;i<6;i++){
		printf("%d ",arr1[i]);
	}
	
	printf("\n");
	printf("arr2: ");
	for(i=0;i<6;i++){
		printf("%d ",arr2[i]);
	}
	
	
	
	
	
	return 0;
}
