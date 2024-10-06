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
	char x;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&x);
	if(x>=65 && x<=90 || x>=97 && x<=122)
		printf("%c is an alphabet", x);
	else
		printf("%c is not an alphabet", x);
}


