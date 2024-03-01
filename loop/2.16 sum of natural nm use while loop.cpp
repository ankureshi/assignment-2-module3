//sum of natural numbers using while loop::

#include<stdio.h>
main()
{
	int i=1,n,s=0;
	printf("Enter your number.. ");
	scanf("%d",n);
	while(i<=n)
	{
		s=s+i;
		i=i+1;
	}
	printf("sum of natural number is..%d",s);
}

