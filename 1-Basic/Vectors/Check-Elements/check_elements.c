#include<stdio.h>


int check_elements (int arr[], int len){
	int count, count_aux, k, i, number, number_aux;
	len--;

	for(k = 0; k <= len; k++){
		printf("%d\t", arr[k]);
		
	}

	printf("\n");

	for(k = 0; k < len; k++){
		count_aux = 0;
		for(i = k+1; i <=len; i++){
			if(arr[k] == arr[i])
				count_aux++;
		}
		if(count_aux > count){
			count = count_aux;
			number = arr[k];
		}
		if((count_aux == count) && (arr[k] < number))
			number = arr[k];

	}
	return number;
}

int main(void){
	int k = 0;
	int len = 0;
	int arr[10];
	int element = 0;

	len = sizeof(arr)/4;

	printf("%d\n", len);

	printf("Enter an array of integer with 10 elements to chech which element most appear: ");
	while(k<10){
		scanf("%d", &arr[k]);
		k++;
	}

	printf("You enterede with the array: \n");

	element = check_elements(arr, len);

	printf("The elemet that most appeared was: %d\n", element);

}