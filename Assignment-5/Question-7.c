// 7. Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number to print n even numbers in reverse order :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
