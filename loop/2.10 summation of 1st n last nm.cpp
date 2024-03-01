//make a summation of first and last digit//
#include<stdio.h>
main()
{
	int n,l,sum;
	printf("Enter the number");
	scanf("%d",&n);
	l=n%10;
	while(n>9)
	
	{
		n=n/10;
	}
	sum=n+l;
	printf("sum of first and last digit is..%d",sum);
}
