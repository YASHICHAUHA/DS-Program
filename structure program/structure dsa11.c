#include<stdio.h>
struct date
{
int day;
int month;
int year;	
}d1,d2,result;
int main()
{
	printf("enter the day for date1:");
	scanf("%d",&d1.day);
	printf("enter the  month for date1:");
	scanf("%d",&d1.month);
	printf("enter the year for date1:");
	scanf("%d",&d1.year);
	printf("the date is as %d/%d/%d\n",d1.day,d1.month,d1.year);
	//now for d2
	printf("enter the day for date2:");
	scanf("%d",&d2.day);
	printf("eneter the month for date2:");
	scanf("%d",&d2.month);
	printf("enter the  year for date2:");
	scanf("%d",&d2.year);
	printf("the date 2 is as %d/%d/%d",d2.day,d2.month,d2.year);
	if(d1.day==d2.day&&d1.month==d2.month&&d1.year==d2.year)
	{
		printf(" both dates are same");
	}
	else
	{
		printf("both dates are different");
	}
	return 0;
}
