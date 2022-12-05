#include<stdio.h>
struct student
{
	int roll;
	char name[60];
	float chem_marks;
	float maths_marks;
	float physics_marks;	
}s[5];
int main()
{
	int i;
	for(i=1;i<=2;i++)
	{
		printf("enter the roll");
		scanf("%d",&s[i].roll);
		printf("enter the name of the student");
		scanf("%s",&s[i].name);
		printf("enter the marks in chemistry");
		scanf("%f",&s[i].chem_marks);
		printf("enter the marks in maths");
		scanf("%f",& s[i].maths_marks);
		printf("enter the marks in physics");
		scanf("%f",&s[i].physics_marks);	
	}
	printf("the information of the students is as\n");
	for(i=1;i<=2;i++)
	{
		printf("the roll number is %d\n",s[i].roll);
		printf("the name of the student is %s\n",s[i].name);
		printf("the marks of the student in chem is %f\n",s[i].chem_marks);
		printf("the marks of the student in maths is %f\n",s[i].maths_marks);
		printf("the marks of the student in physics is %f\n",s[i].physics_marks);
		float	percentage=(s[i].chem_marks + s[i].maths_marks + s[i].physics_marks)/300*100;
		printf("the percentage is %f\n",percentage);
}
return 0;
}



