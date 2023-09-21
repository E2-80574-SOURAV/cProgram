/*6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12  */
#include<stdio.h>
int main(void)
{   int num,count;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Factors of %d are:\n",num);
	count =1;
	while(count<num)
	{
	if(num%count==0)
	{
	   printf("%4d",count);
	}
	count++;
	}
    return 0;
}
