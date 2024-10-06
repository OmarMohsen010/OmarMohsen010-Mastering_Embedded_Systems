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
	float a[100];
	int x;
	float sum=0,avg;
	printf("Enter number of data: ");
	fflush(stdout);
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		printf("%d. Enter number: ",i);
		fflush(stdout);
		scanf("%f",&a[i-1]);
		sum+=a[i-1];
	}
	avg = sum/x;
	printf("Average = %.2f",avg);

}


