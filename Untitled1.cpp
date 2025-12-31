/*//////////////// This is basic boiler plate ////////////////

#include <stdio.h> //preprocessor standard input/output header file
#include <conio.h> //preprocessor console input/output header file

int main(){
	//statements
	return 0;
}



//////////////// printing value on console ////////////////
#include <stdio.h> 
#include <conio.h> 

int main(){
	printf("Hello world");
	return 0;
}

//////////////// Taking input from user ////////////////

scanf('format', &variable);

/*
format

int --> %d
float --> %f
char --> %c
double --> %lf
*/

//Example----------------------------------------*/

#include <stdio.h> 
#include <conio.h> 

int main(){
	int a;
	scanf("%", &a);
	printf("value in a is: ", a);
	return 0;
}
