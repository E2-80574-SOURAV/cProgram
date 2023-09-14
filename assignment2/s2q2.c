#include<stdio.h>
int main(void)
{
	int num1,num2;
	char choice;
	int res;
	printf("Enter the two number:");
	scanf("%d%c%d",&num1,&choice,&num2);
	switch(choice)
	{
		case'+':
			res=num1+num2;
			break;
		case'-':
			res=num1-num2;
			break;
		case'*':
			res=num1*num2;
			break;
		case'/':
			res=num1/num2;
			break;
                 defalt:
		printf("invalid operation\n");	
	}
	printf("%d%c%d=%d\n",num1,num2,choice,res);
return 0;
}
