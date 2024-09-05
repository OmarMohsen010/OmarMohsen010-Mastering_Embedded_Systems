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
void rev();
int main() {
	printf("Enter a sentence: ");
	rev();
	return 0;

}
void rev(){
	char c;
	fflush(stdout);
	scanf("%c",&c);
	if(c!='\n'){
		rev();
		printf("%c",c);
	}
}

