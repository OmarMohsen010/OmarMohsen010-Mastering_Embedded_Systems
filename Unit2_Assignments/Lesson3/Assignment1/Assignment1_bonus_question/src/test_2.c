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
	int a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("\nEnter value of b: ");
	fflush(stdout);
	scanf("%d",&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n\nAfter swapping, value of a = %d",a);
	printf("\nAfter swapping, value of b = %d",b);
}
