#include<stdio.h>
struct distance
{
	int feet;
	int inch;
	
}d1,d2,sum;
int main()
{  //here we are takig d1 as input
	printf("enter the value of the d1 in feet ");
	scanf("%d",&d1.feet);
	printf("enter the value of distance d1 in inches");
	scanf("%d",&d1.inch);
	//here we are taking d2 as input
	printf("enter the value of d2 in  feet");
	scanf("%d",&d2.feet);
	printf("enetr the value of d2 in inches ");
	scanf("%d",&d2.inch);
	//now adding both 
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	while(sum.inch>=12)
	{
		sum.inch=sum.inch-12;
		sum.feet++;
	}
	printf("%d %d",sum.feet,sum.inch);
	return 0;
	
}
