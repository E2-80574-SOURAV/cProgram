/*A. While loop
1.
Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
****** */
#include<stdio.h>
int main(void)
{
   char ch;
   int num;
   printf("Enter the character:\n");
   scanf("%c",&ch);
   printf("Enter the num:\n");
   scanf("%d",&num);
   int i=1;
   while(i<=num)
   {
   		printf("%c",ch);
		i++;
   }
   return 0;
}
