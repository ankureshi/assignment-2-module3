//print reverse number using for loop::
#include<stdio.h>
main()
{
	int n,r;
	printf("Enter number::");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	
		if (n>0)
		{
			r=n%10;
			n=n/10;
			printf(" %d ",r);
		}
	}
}
