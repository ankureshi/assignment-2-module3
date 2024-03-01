//To perform febonacci series::

#include<stdio.h>
main()
{
	int i,n,a=0,b=1,c;
	printf("enter the number..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
}


