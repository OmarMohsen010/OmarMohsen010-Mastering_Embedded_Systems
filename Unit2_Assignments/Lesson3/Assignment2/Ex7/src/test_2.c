/*
 ============================================================================
 Name        : test_2.c
 Author      : omard
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
int main(){
	int x;
	int fact = 1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x>0){
	for(int i=1;i<=x;i++){
		fact *=i;
	}
	printf("Factorial = %d",fact);
	}
	else if(x<0)
		printf("Error!!! Factorial of a negative number doesn't exist");
	else
		printf("Factorial = Zero");
}


