#include<stdio.h>
int main(void)
{
	int op1,op2;
	char opr;
	int res;
	
	printf("Enter op1 opr op2: ");
	scanf("%d %c %d",&op1,&opr,&op2);
	switch(opr)
	{
		case'+':
			res=op1+op2;
			
			break;
		case'-':
			res=op1-op2;
			
			break;
		case'*':
			res=op1*op2;
			
			break;
		case'/':
			res=op1/op2;
			
			break;
        defalt:
		
	        printf("invalid operation\n");	
	}

printf("%d %c %d=%d\n",op1,opr,op2,res);
	
return 0;
}
