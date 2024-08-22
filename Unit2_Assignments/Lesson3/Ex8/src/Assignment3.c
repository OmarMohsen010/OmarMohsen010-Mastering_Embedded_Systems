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
	char str[100],temp;
	int i,j;
	printf("Enter the string: ");
	fflush(stdout);
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reverse string is: %s",str);
	}



