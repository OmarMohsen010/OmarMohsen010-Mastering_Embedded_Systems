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
	float a,b,c;
		printf("Enter value of a: ");
		fflush(stdout);
		scanf("%f",&a);
		printf("\nEnter value of b: ");
		fflush(stdout);
		scanf("%f",&b);
		c=a;
		a=b;
		b=c;
		printf("\n\nAfter swapping, value of a = %f",a);
		printf("\nAfter swapping, value of b = %f",b);
}
