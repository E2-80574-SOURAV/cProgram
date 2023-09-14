#include<stdio.h>
int powe(int,int);
int main(void)
{
	int n1=2,n2=3;
	printf("power=%d\n",powe(n1,n2));
return 0;
}
int powe(int base,int indx)
{
int p=1;

for(int i=1;i<=indx;i++)
{
	p=p*base;
}
return p;	
}
