// 9. Write a program to print cubes of the first N natural numbers.
#include<stdio.h>
int main()
{
	int i,n,cube;
	printf("Enter a number to print cube of the first n natural number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		printf("cube of %d is %d\n",i,cube);
	}
	return 0;
}
