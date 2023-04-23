// 2. Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number to print n natural numbers:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
