#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	char name[20];
	float per;
} s1={101,"samantha",79.90},s2;
int main()
{
	struct student s3={103,"ram",77.90}, s4;
	s2.roll=102;
	strcpy(s2.name,"raju");
	s2.per=80.90;
	printf("enter s4 roll");
	scanf("%d",&s4.roll);
	printf("enter s4 name");
	scanf("%s",&s4.name);
	printf("enter s4 per");
	scanf("%f",&s4.per);
	printf("student details are:\n");
	printf("\n %d %s %f ",s1.roll,s1.name,s1.per);
		printf("\n %d %s %f ",s2.roll,s2.name,s2.per);
			printf("\n %d %s %f ",s3.roll,s3.name,s3.per);
				printf("\n %d %s %f ",s4.roll,s4.name,s4.per);
				return 0;
	}

