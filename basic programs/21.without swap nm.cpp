// swap numbers withot 3rd variable::

#include<stdio.h>
main()
{
	int a,b;
	printf("ente 1st number");
	scanf("%d",&a);
	
	printf("ente 2nd number");
	scanf("%d",&b);
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nswap value a is %d",a);
	printf("\nswap value b is %d",b);
}
