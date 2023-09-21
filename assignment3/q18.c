/*18. Write a program to print the tables of the numbers from 1 to 10.*/

#include<stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<=10;i++)
	{	
		for(j=1;j<=10;j++)
	{
		printf("%4d",i*j);
	}
		printf("\n");
	}
return 0;
}
