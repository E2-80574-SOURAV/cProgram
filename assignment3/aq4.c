/*4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120 */
#include<stdio.h>
int main(void)
{
   int num=5,fact=1;
   printf("Factorial of a num:\n");
   int i=1;
   while(i<=num)
   {
      fact=fact*i;
	  
 	  i++;
   }
   printf("%d\n",fact);
   return 0;
}
