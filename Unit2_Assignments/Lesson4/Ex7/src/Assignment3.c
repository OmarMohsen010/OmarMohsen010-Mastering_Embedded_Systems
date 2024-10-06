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
	char str [100];
	int len=0;
	int i=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(str);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	printf("Length of string: %d",len);
	}



