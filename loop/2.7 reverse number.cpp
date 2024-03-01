//print reverse number//
#include<stdio.h>
main()
{
	int n,r;
	printf("enter the number..");
	scanf("%d",&n);
	
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
