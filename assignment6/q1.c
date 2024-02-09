/*1. Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok()*/
#include<stdio.h>
#include<string.h>

/*size_t my_strlen(const char *s)

{
	int len=0;
	for(int i=0;s[i]!='\0';i++)
		len++;
	return len;
}
int main(void)
{
	char str[]="PG-DESD";
	printf("str=%s\n",str);
	printf("lentgh=%lu\n",strlen(str));
	printf("length=%lu\n",my_strlen(str));

	return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[20],str2[20];

	printf("Enter the string str1:\n");
	scanf("%s",str1);

	printf("Enter the string str2:\n");
	scanf("%s",str2);
	strcpy(str2,str1);

	printf("after strcpy: str1=%s,str2=%s",str1,str2);
	return 0;
}
