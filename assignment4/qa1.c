#include<stdio.h>
int factorial(int);
int main(void)
{
	int n1=5;
	printf("Factorial=%d\n",factorial(n1));
return 0;
}
int factorial(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
		return fact;
	
}
