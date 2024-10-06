#include <stdio.h>
#include <math.h>
#include <string.h>

struct SDistance
{
	int m_feet;
	float m_inch;
};

int main() {
	struct SDistance d1;
	struct SDistance d2;
	struct SDistance sum;
	printf("Enter information for 1st distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%d",&d1.m_feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&d1.m_inch);
	printf("\nEnter information for 2nd distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);
	scanf("%d",&d2.m_feet);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f",&d2.m_inch);
    sum.m_feet = d1.m_feet + d2.m_feet;
    sum.m_inch = d1.m_inch + d2.m_inch;
    if(sum.m_inch > 12)
    {
    	sum.m_inch -=12;
    	sum.m_feet +=1;
    }
    printf("Sum of distances=%d'-%.1f""",sum.m_feet,sum.m_inch);
	return 0;
}
