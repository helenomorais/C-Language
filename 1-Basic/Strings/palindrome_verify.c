#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool IsPalindrome(char str[]){
	int len = strlen(str)-1;
	int k = 0;
	
	for(k =0; k<len--; k++){
		if (str[k] != str[len])
			return false;
	}
	return true;
}

int main(void){
	char str[12];
	fflush(stdin);

	printf("Enter a string to check if it is a palindrome: ");
	fgets(str, 12, stdin);

	if(strlen(str)>10){
		printf("Maximum size exceeded. Please enter a string with 10 character maximum.\nRun it again... ");
		return 0;
	}
	
	else{
		if(IsPalindrome(str))
			printf("Is a palindrome!\n");
		else
			printf("Is not a palindrome!\n");
	}
}