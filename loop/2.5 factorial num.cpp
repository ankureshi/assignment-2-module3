//print factorial value//
#include<stdio.h>
main()
{
	int n, fact=1,i;
	printf("enter value::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		printf("\n factorial value is..%d",fact);
		
	}
	
}
