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
	float x,y,z;
	float max = -1;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if (x>max){
		max = x;
	if (y>max){
		max = y;
	}
	if (z>max){
		max = z;
	}
	}
	printf("Largest number = %.2f",max);
}


