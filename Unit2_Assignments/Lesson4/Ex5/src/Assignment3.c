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
	int a[10];
	int num,elem,loc;
	printf("Enter number of elements : ");
	fflush(stdout);
	scanf("%d",&num);
	printf("\n");
	for(int i=0;i<num;i++){
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
	}
	printf("\n\nEnter the element to be searched : ");
	fflush(stdout);
	scanf("%d",&elem);
	printf("\n");
	int i=0;
while(i<num && elem!=a[i]){
	i++;
}
 if(i<num){
	loc=i+1;
	printf("Number found at the location : %d",loc);
 }
 else
	 printf("Number not found");
}
