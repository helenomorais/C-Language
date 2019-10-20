#include<stdio.h>

int age;

int main(void){
	printf("Enter with your age: ");
	scanf("%d", &age);
	if(age < 18){
		printf("You CAN'T buy beers\n");
	}
	else{
		printf("You CAN buy beers\n");
	}
	return 0;
}