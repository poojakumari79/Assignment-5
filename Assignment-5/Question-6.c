// 6. Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number to print first n even natural numbers :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
