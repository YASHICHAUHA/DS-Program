#include<Stdio.h>
struct employee
{
	char name[30];
	int accountno;
	int balance;
}e[2];
void more(struct employee e[])
{    int i;
    int balance;
	for(i=1;i<=2;i++)
	{
		if(e[i].balance>1000)
		{
			balance=e[i].balance+100;
		}

	printf("balance of the employee after incremented is %d\n:",balance);
}

}
int main()
{    int n;
	int i;
	for(i=1;i<=2;i++)
	{
		printf("enter the name of the employee:");
		scanf("%s",&e[i].name);
		printf("enter the account number of the employee:");
		scanf("%d",&e[i].accountno);
		printf("enetr the balance of the employee:");
		scanf("%d",&e[i].balance);
	}
	printf("To store the information of the employee:\n");
	for(i=1;i<=2;i++)
	{
		printf("the name of the employee is%s\n:",e[i].name);
		printf("the account number of the employee is%d\n:",e[i].accountno);
		printf("the balance of the employee is :%d\n:",e[i].balance);
		
	}
	more(e);

	return 0;
}
