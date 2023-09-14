#include<stdio.h>
int main(void)
{
int value;
printf("Enter the value:");
scanf("value=%d",value);

printf("\ncharacter value is: %d",value);
printf("\nDecimal value is: %d",value);
printf("\noctal value is: %o",value);
printf("\nHexadecimal value is: %x",value);
return 0;
}
