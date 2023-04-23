// 10. Write a program to print a table of N.
 
 #include<stdio.h>
 int main()
 {
 	int i,n,product;
 	printf("Enter a number to print a table :");
 	scanf("%d",&n);
 	for(i=1;i<=10;i++)
 	{
 		product=n*i;
 		printf("%d x %d = %d\n",n,i,product);
	 }
	 return 0;
 }
 
