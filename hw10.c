#include <stdio.h>
#include <string.h>

struct cities{
	char name[50];
	char country[50];
	char population[50];
};

int main(void){
	struct cities cityArr[3];
	int i;
	
	printf("Input three cities:\n");
	
	for(i=0;i<3;i++){
		printf("Name> ");
		fgets(cityArr[i].name,sizeof(cityArr[i].name),stdin);
		printf("Country> ");
		fgets(cityArr[i].country,sizeof(cityArr[i].country),stdin);
		printf("Population > ");
		fgets(cityArr[i].population,sizeof(cityArr[i].population),stdin);
	}
	
	for(i=0;i<3;i++){
		cityArr[i].name[strlen(cityArr[i].name)-1] = 0;
		cityArr[i].country[strlen(cityArr[i].country)-1] = 0;
		cityArr[i].population[strlen(cityArr[i].population)-1] = 0;
	}
	
	printf("Printing the three cities:\n");
	for(i=0;i<3;i++)
		printf("%s in %s with a population of %s people\n",cityArr[i].name,cityArr[i].country,cityArr[i].population);	

	
	return 0;
}
