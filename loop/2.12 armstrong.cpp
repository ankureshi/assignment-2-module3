// print armstrong number//
#include<stdio.h>
main()
{
	int n,x,r,sum;
	printf("Armstrong numbers");
	for(n=1;n<=500;n++)
	{
		sum=0;
		x=n;
		while(x!=0)
		{
			r=x%10;
			sum=sum+(r*r*r);
			x=x/10;
		}
	}
	if(sum==n)
	
		printf("%d ",n);

}
