// Learning Arrays in C

#include <stdio.h>
int main(){

	//int arr[5]; // declaration -- [integer] is the size of array

	// putting data into it 
	
	int arr[5] = {1,2,3,4,5}; // This is a array holding 1,2,3,4,5 at its index places
	
	//\/\/\/\/\/\/\/\/\/\/\ OR /\/\/\/\/\/\/\/\/\/\/\/\/\\
	
	// variable[index value] = value;
	
	arr[0] =1; // This we can also use to update the value
	
	// printing data into the screen
	// We often use loop to print the output
	int i;
	for (i = 0; i< 5; i++){
		printf("Horizontal: %d ", arr[i]); // This will print the array in horizontal way
		printf("Vertical\n%d\n", arr[i]); // This will print the array in vertical way
	}
	
	// making it user defined
	
	for (i = 0; i <5; i++){
		
		scanf("%d", &arr[i]); // This loop will take input from user and add values in index values 
	}
	
	//Finding the size of array
	
	int n = sizeof(arr)/sizeof(arr[0]); 
	
	/*
	Here n contais the size of array
	
	sizeof(arr) => total bytes taken by arr in memory
	sizeof(arr[0]) => total bytes taken by single element of arr in memory
	*/
	
	
	// sum of array
	int sum = 0;
	int i;
	for(i =0; i <5; i++){
		sum += arr[i];
		printf("%d", sum);
	}
	
	// min and max of array elements
	
	int min = arr[0];
	int max = arr[0];
	int i;
	
	for(i = 1; i < 5; i++){
		if (arr[i]< min){
			min = arr[i];
		}
		if (arr[i] > max){
			max = arr[i];
		}
		
	}
	
	// Linear Search 
	
	int key = 3;
	int i;
	for(i = 0; i < 5; i++){
		if (arr[i] == key){
			printf("Found");
			break;
		}
	}
	
	// counting even or odd
	
	int even = 0;
	if(arr[i]%2 == 0) even++;

	// Deletion in arrays
	
	for(i = 2; i < n-1; i++){  // here n is the size of array 
		arr[i] = arr[i + 1];
		n--;
	}
	
	/*
	
	In C to delete any element we use shifting method 
	
	*/
	
	// Array pointers
	
	//<-------  arr[i] == *(arr + i)  ------->\\
	
	
	
	return 0;
}
