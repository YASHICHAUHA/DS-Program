#include<stdio.h>
struct student
{
	int roll;
	char name[50];
	int age;
	char address[60];
	
}s;
void checkroll(struct student std[],int n)
{ int i;
	printf("student with even roll number");
	for( i=0;i<n;i++)
	{ 
		if(std[i].roll%2 == 0)
		{
			printf("name is %s\n",std[i].name);
		}
	}
}
void getdetails(struct student std[],int n)
{ int roll,i;
	printf("enter the roll number of the user");
	scanf("%d",&roll);
	printf("the roll number is %d",roll);
	for(i=1;i<=n;i++)
	{
	 if(std[i].roll==roll)
	 {
	 	printf("roll no is %d\n",std[i].roll);
	 	printf("name:%s\n",std[i].name);
		printf("age is %d\n",std[i].age);
		printf("adress is %s\n",std[i].address);
		}
		}
	}
	int main()
	{ int i;
		int n;
		printf("enter the number of the student");
		scanf("%d",&n);
		struct student std[n];
		for(i=1;i<=n;i++)
		{
			printf("enter the roll number of the student");
			scanf("%d",&std[i].roll);
			printf("enter the name of the student");
			scanf("%s",&std[i].name);
			printf("enter the age of the student");
			scanf("%d",&std[i].age);
			printf("enetr the address of the student");
			scanf("%s",&std[i].address);
	    }
			checkroll(std,n);
			getdeatail(std,n);
	return 0;
}

