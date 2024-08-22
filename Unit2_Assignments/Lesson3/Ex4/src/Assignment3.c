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
		a[i]=i+1;
		printf("%d ",a[i]);
	}
	printf("\n\nEnter the element to be inserted : ");
	fflush(stdout);
	scanf("%d",&elem);
	printf("\n");
	printf("Enter the location : ");
		fflush(stdout);
		scanf("%d",&loc);
		printf("\n");
	for(int i=num;i>=loc;i--){
			a[i]=a[i-1];
		}
	        num++;
            a[loc-1]=elem;
     for(int i=0;i<num;i++){
            printf("%d ",a[i]);
            	}
}
