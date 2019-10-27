#include<stdio.h>
#include<string.h>

void lwrcase(char *str){
	int k = 0;
	int aux = 0;
	char aux_char[100];

	while(str[k]!='\0'){
		aux = (int)str[k];

		if(64 < aux && aux < 91){
			aux = aux+32;
			str[k] = (char)aux;
			//printf("%c\t", str[k]);
			k++;
		}
		else
			k++;
	}
}

int main(void){
	char str[100];
	fflush(stdin);
	printf("Insert a string: ");
	fgets(str, 100, stdin);
	lwrcase(str);
	printf("The string in lower case is: %s\n", str);
	return 0;
}