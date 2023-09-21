//5. Write a function to calculate maximum and minimum of the array elements.

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
	
	int max=arr[0];
	for(i=0;i<num;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}

	printf("maximum=%d\n",max);

	int min=arr[0];
	for(i=0;i<num;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}

	printf("minimum=%d\n",min);
	
	
	
	
	
	return 0;
}
