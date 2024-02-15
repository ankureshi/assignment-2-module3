//calculate 2 swap num using with mul and div
#include<stdio.h>
main()
{
	int a,b;
	printf("ente 1st number");
	scanf("%d",&a);
	
	printf("ente 2nd number");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swapping value is..%d\n ",a);
	printf("after swapping value is..%d\n ",b);
}
