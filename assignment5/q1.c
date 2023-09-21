/*1. Write a program to accept marks of five subjects, calculate its total and average.*/

#include<stdio.h>
int main(void)
{
	int num,arr[5];
	printf("Enter the number:\n");
	scanf("%d",&num);

	printf("Enter the array elements:\n");

	for(int i=0;i<num;i++)
	{	
		scanf("%d",&arr[i]);
	}

	printf("Array:\n");

	for(int i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	int tot=0,ave;
	printf("Total of the number:\n");
	for(int i=0;i<num;i++)
	{
		tot=tot+arr[i];
	}
	
	printf("%d\n",tot);
	
	printf("Average of the number:\n");
	ave=tot/num;
	printf("%d\n",ave);

	return 0;
}
