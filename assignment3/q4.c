#include<stdio.h>
int main(void)
{
	int num,fact;
	printf("Enter the number :");
	scanf("%d",&num);
	fact=1;//initialization
	while(num>0)//condition
	{
		fact=fact*num;
		num--;//modification
	}

		printf("%d\n",fact);//body

return 0;
}
