//Find the largest of 3 numbers::

#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 1st num..");
	scanf("%d,&a");
	printf("enter 2nd num..");
	scanf("%d,&b");
	printf("enter 3rd num..");
	scanf("%d,&c");
	if(a>b&&a>c)
	{
		printf("\n a is large");
	}
	else if(b>a&&b>c)
	{
			printf("\n b is large");
	}
	else
	{
		printf("\n c is large");
	}
	
}
