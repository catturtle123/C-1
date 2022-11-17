#include <stdio.h>

int main(void){
	char str[50];
	int i;
	
	fputs("Input> ",stdout);
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i] !='\n';i++){
		if('a'<=str[i] && str[i]<='z'){
			str[i]=str[i]-32;
		}else if('A'<=str[i]&&str[i]<='Z'){
			str[i]=str[i]+32;
		}
	}
	
	printf("Output> %s",str);
	
	
	return 0;
}
