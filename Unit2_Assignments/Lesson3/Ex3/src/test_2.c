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
	int r,c;
	int a[10][10];
	int a_trans[10][10];
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);
	scanf("%d %d",&r,&c);
	printf("Enter elements of matrix:\n");
	for(int i =1;i<=r;i++){
		for(int j =1;j<=c;j++){
		printf("Enter element a%d%d: ",i,j);
		fflush(stdout);
		scanf("%d",&a[i-1][j-1]);
		}
	}
	printf("\nEntered matrix: \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d \t",a[i][j]);
					if(j==c-1)
						printf("\n\n");
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a_trans[j][i]=a[i][j];
		}
	}
	printf("\nTranspose matrix: \n");
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				printf("%d \t",a_trans[i][j]);
						if(j==r-1)
							printf("\n\n");}
		}

}

