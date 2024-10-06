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
	float x,y;
	char choice;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&choice);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	switch(choice)
	{
	case '+':
	{
		printf("%.1f + %.1f = %.1f",x,y,x+y);
	}
	     break;
	case '-':
		{
			printf("%.1f - %.1f = %.1f",x,y,x-y);
		}
	     break;
	case '*':
		{
			printf("%.1f * %.1f = %.1f",x,y,x*y);
		}
	     break;
	case '/':
		{
			printf("%.1f / %.1f = %.1f",x,y,x/y);
		}
	     break;
	}

}


