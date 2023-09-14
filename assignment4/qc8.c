#include<stdio.h>
void swap(int *,int *);
int main(void)
{
	int n1=30,n2=50;
	printf("Before swap:n1=%d,n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("after swap:n1=%d,n2=%d\n",n1,n2);
return 0;
}
void swap(int *pnum1,int *pnum2)
{
	int temp=*pnum1;
	*pnum1=*pnum2;
	*pnum2=temp;
}
