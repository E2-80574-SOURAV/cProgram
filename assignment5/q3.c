//*3. Write a function to reverse the array elements.

#include<stdio.h>
int main(void)
{
	int num,i,arr[20];
	printf("Enter the number:\n");
	scanf("%d",&num);

	printf("Enter the array elements:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Array:\n");
	for(i=0;i<num;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}

	printf("Reverse elements of the array:\n");

	for(i=(num-1);i>=0;i--)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
	return 0;
}
