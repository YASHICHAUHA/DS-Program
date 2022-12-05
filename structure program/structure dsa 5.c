#include<stdio.h>
struct complex
{   
   float real;
	float imag;
}n1,n2,sum;
int main()
{  // here we are taking the input for number 1
	printf("enter the value of n1 real");
	scanf("%f",&n1.real);
	printf("enter the value of n1 imag ");
	scanf("%f",&n1.imag);
	//now takimg the input for n2
	printf("enter the value of n2 real");
	scanf("%f",&n2.real);
	printf("enter the value of n2 imag");
	scanf("%f",&n2.imag);
	//sum of the two complex number is here
	sum.real=n1.real+n2.real;
	sum.imag=n1.imag+n2.imag;
	printf("the sum of two complex number is %f+i%f ",sum.real,sum.imag);
	return 0;
}
