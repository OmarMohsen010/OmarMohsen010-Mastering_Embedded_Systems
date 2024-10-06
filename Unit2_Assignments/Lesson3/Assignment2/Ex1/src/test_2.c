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
	int x;
	printf("Enter an integer you want to check: \n");
	fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is Even",x);
	else
		printf("%d is Odd",x);
	return 0;
}
