/*
 ============================================================================
 Name        : Assignment3.c
 Author      : omard
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int factorial(int num){
	if(num!=1)
		return num*factorial(num-1);
}

int main() {
	int x;
	printf("Enter a positive number: ");
    fflush(stdout);
    scanf("%d",&x);
    printf("Factorial of %d = %d",x,factorial(x));
}
