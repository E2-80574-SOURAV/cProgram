#include<stdio.h>
int main(void)
{
int n1,n2,n3;
int max=0;
printf("Enter the three number:");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>n2)
{
	if(n1>n3)
	{
        max=n1;
	}
       else
      {
       max=n3;
        }
}
else if(n2>n3)
	{
max=n2;
}
else
{
max=n3;
}

printf("Maximun value %d",max);
return 0;
}
