//6. Write a function to swap two numbers using XOR operation.
#include<stdio.h>
void myswap(int num1,int num2);
int main(void)
{
    int a,b;

    myswap(a,b);
    return 0;
}
void myswap(int num1,int num2)
{
    
    printf("Enter two number :");
    scanf("%d%d",&num1,&num2);
    printf("Before swap : num1=%d num2=%d\n",num1,num2);

    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    
    printf("After swap : num1=%d num2=%d\n",num1,num2);

}

