#include <stdio.h>
#include <math.h>
#include <string.h>

struct SComplex
{
	float m_r;
	float m_i;
};
struct SComplex read_complex(char arr[100]){
	struct SComplex C;
	printf("Enter %s complex value",arr);
	printf("\nEnter real and imaginary parts respectively: ");
	fflush(stdout);
	scanf("%f %f",&C.m_r,&C.m_i);
	return C;
}
struct SComplex add_complex(struct SComplex A,struct SComplex B){
	struct SComplex C;
	C.m_r=A.m_r+B.m_r;
	C.m_i=A.m_i+B.m_i;
	return C;
}
void print_complex(char name[],struct SComplex C){
	printf("%s= %.1f+%.1fi",name,C.m_r,C.m_i);
}

int main() {
	struct SComplex A,B,Sum;
	A=read_complex("A");
	B=read_complex("B");
	Sum = add_complex(A,B);
	print_complex("Sum",Sum);
	return 0;
}
