#include<stdio.h>
int main(void)
{
int num;
printf("Enter A Number:");
scanf("%d",&num);
if(num>0)
printf("Number Is Positive\n");
else if(num<0)
printf("Number Is Negative\n");
else
printf("Number Is Zero\n");	
return 0;
}
