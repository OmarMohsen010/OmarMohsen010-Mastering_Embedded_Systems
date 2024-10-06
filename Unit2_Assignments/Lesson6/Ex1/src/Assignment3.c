#include <stdio.h>
#include <math.h>
#include <string.h>

struct SStudent
{
	char name[100];
	int roll;
	float marks;
};

int main() {
	struct SStudent x;
	printf("Enter information of students: \n\n");
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s",&x.name);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d",&x.roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f",&x.marks);
	printf("\nDisplaying Information\n");
	printf("name: %s",x.name);
	printf("\nRoll: %d",x.roll);
	printf("\nMarks: %.2f",x.marks);
	return 0;


}
