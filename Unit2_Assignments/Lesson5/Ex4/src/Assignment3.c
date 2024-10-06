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
int power(int b,int p);
int main() {
	int b,p;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&b);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
		scanf("%d",&p);
		printf("%d^%d = %d",b,p,power(b,p));

	return 0;

}
int power(int b,int p){
	if(p>0)
		return b*power(b,p-1);
	else
		return 1;
	}


