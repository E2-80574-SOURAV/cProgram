//2. Write a function to display given number in binary format.

#include<stdio.h>
void displayBinaryNumber(int num);
int main(void)
{
    int n;
    displayBinaryNumber(n);
    return 0;
}

void displayBinaryNumber(int num)
{
    printf("Enter an integer number : ");
    scanf("%d",&num);
    int i,mask;
    for(i=31;i>=0;i--)
    {
        mask=1<<i;
        putchar((num&mask)?'1':'0');
        if(i%8==0)
            putchar(' ');
    }
    printf(" \n");
}

    
