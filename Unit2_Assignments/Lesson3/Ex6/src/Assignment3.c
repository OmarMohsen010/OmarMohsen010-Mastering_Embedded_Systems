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

int main() {
	char arr [100];
	char test;
	int i=0,count=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(arr);
	printf("\nEnter a character to find frequency: ");
	fflush(stdout);
	scanf("\n%c",&test);
	for(i=0;arr[i]!='\0';i++){
		if(test==arr[i])
			count++;
	}
	printf("\nFrequency of %c = %d",test,count);
	}



