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
	float x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%.2f is positive",x);
	else if(x<0)
		printf("%.2f is negative",x);
	else
		printf("You entered zero");
	return 0;
}
