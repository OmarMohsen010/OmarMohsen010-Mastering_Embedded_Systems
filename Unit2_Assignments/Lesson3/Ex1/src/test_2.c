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
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int r=2,c=2;
	printf("Enter the elements of 1st matrix\n");
	//storing elements of 1st matrix
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("Enter element a%d%d",i+1,j+1);
			fflush (stdout);
			scanf("%f",&a[i][j]);
		}
	}
	//storing elements of 2nd matrix
	printf("Enter the elements of 2nd matrix\n");
	for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				printf("Enter element b%d%d",i+1,j+1);
				fflush (stdout);
				scanf("%f",&b[i][j]);
			}
		}

//loop to add the two matrices
	for(int i =0;i<2;i++){
		for(int j =0;j<2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
//loop to display sum matrix
	printf("Sum of matrix: \n")
	for(int i =0;i<2;i++){
			for(int j =0;j<2;j++){
				printf("a[i][j]\t")
						if(j==c-1)
							printf("\n");
			}
		}

}


