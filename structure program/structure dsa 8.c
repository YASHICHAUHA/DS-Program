#include<stdio.h>
struct complex
{
	float real;
	float imag;
}n1,n2,add,sub,mul;
int main()
{
	printf("enter the value of n1 real");
	scanf("%f ",&n1.real);
	printf("enter the value of n1 imag");
	scanf("%f \n",&n1.imag);
	printf("enter the value of n2 real");
	scanf("%f \n",&n2.real);
	printf("enter the value of n2 imag");
	scanf("%f \n",&n2.imag);
	add.real=n1.real+n2.real;
	add.imag=n1.imag+n2.imag;
	printf("the addition is %f+i%f\n",add.real,add.imag);
	sub.real=n1.real-n2.real;
	sub.imag=n1.imag-n2.imag;
	printf("the subtraction is %f-i%f\n",sub.real,sub.imag);
	mul.real=n1.real*n2.real;
	mul.imag=n1.imag*n2.imag;
	printf("the multiplication is %f*i%f\n",mul.real,mul.imag);
	return 0;
}
