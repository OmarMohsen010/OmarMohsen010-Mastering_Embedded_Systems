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
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='a'||x=='i'||x=='e'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		printf("%c is a vowel",x);
	else
		printf("%c is a consonant",x);
	return 0;
}
