#include<stdio.h>
int main(void)
{
int num1,num2;
int div;
printf("Enter Any Two Number:");
scanf("%d%d",&num1,&num2);
if(num2!=0)
div=num1/num2;
else
printf("Division by zero error\n");
goto END;
printf("Division of two number:%d\n",div);

return 0;
END:
}
