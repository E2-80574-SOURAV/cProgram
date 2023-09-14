#include<stdio.h>
int main(void)
{
int n1,n2;
printf("Enter Any Two number:");
scanf("%d%d",&n1,&n2);
n1>n2?printf("n1 is greater than\ni"):printf("n2 is greater than\n");
int max=n1>n2?n1:n2;
printf("Max value:%d",max);
return 0;
}
