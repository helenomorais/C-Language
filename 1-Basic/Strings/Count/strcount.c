#include<stdio.h>
#include<string.h>

char str[100];

int strcount(char *str){
	int k = 0;
	int count = 0;

	while(str[k]!='\0'){
		count++;
		printf("\n%d \t %c", k, str[k]);
		k++;
	}
	return count-1;
}

int main(void){
	int strlenght = 0;
	fflush(stdin);
	printf("Insert a string: ");
	fgets(str, 100, stdin);
	strlenght = strcount(str);
	printf("\n");
	printf("The string countain %d characters. \n", strlenght);

	return 0;
}