//PRINT PALINDROM NUMBER USING FUNCTION

#include<stdio.h>
void palindrom()
{
	int n,c,s,i,r;
	printf("Enter any value");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
		c==n;
		{
			printf("%d",n);
		}
	}
}
main()
{
	palindrom();
}
