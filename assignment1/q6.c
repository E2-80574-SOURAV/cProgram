#include<stdio.h>
int main(void)
{
int i,num;
printf("Enter any number:");
scanf("%d",&num);
printf(" Table of %d\n",num);
for( i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}

return 0;
}
