#include <stdio.h>
union student
{
	int roll;
	char name[20];
	float per;
};
int main()
{
	union student s={164,"bobby",77.90};
	printf(" %d %s %f ",s.roll,s.name,s.per);
	return 0;
}
