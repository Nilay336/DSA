#include <stdio.h>

int main(){
	int arr[5];
	int i, small = arr[0], large = arr[0];
	for (i = 0; i<5; i++){
		printf("Enter the number to list: ");
		scanf("%d", &arr[i]);
		if (arr[i]> large){
			large = arr[i];
		}
		if (arr[i]< small){
			small = arr[i];
		}
		
		
	}
	
	printf("small: %d\nlarge: %d", small, large);
	return 0;
}
