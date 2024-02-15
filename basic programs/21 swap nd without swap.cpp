//swap two number using 3rd variable 
#include<stdio.h>
main()
{
	int a,b,swap;
	printf("ente 1st number");
	scanf("%d",&a);
	
	printf("ente 2nd number");
	scanf("%d",&b);
	
	swap=a;
	a=b;
	b=swap;
	
	printf("\nswap value a is %d",a);
	printf("\nswap value b is %d",b);
}
