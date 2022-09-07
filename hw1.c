#include <stdio.h>

int main(void){
	int a,b;
	printf("Input two integers: ");
	scanf("%d %d",&a,&b);
	printf("%d & %d = %d\n",a,b,(a&b));
	printf("%d | %d = %d\n",a,b,(a|b));
	printf("%d ^ %d = %d",a,b,(a^b));
	
	return 0;
}
