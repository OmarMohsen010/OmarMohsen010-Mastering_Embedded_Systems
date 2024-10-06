#include <stdio.h>
#include <math.h>
#include <string.h>

struct SStudent
{
	int m_roll;
	char m_name[100];
	int m_marks;
};

int main() {
	struct SStudent x[10];
	int i;
	for(i=0;i<10;i++){
		printf("For roll number ");
		fflush(stdout);
		scanf("%d",&x[i].m_roll);
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",&x[i].m_name);
		printf("Enter marks: ");
	    fflush(stdout);
		scanf("%d",&x[i].m_marks);
		printf("\n");
		fflush(stdout);
	}
	printf("Displaying information");
	for(i=0;i<10;i++){
			printf("Information for roll number %d\n",x[i].m_roll);
			printf("Name: %s\n",x[i].m_name);
			printf("Marks: %d\n\n",x[i].m_marks);
		}
	return 0;
}
