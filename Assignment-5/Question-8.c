// 8. Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main()
{
	int i,n,square;
	printf("Enter a number to print squares of the first n natural numbers :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		square=i*i;
		printf(" square of %d = %d\n",i,square);
	}
	return 0;
}

