#include<stdio.h>
main()
{
	int td,m;
	printf("enter your days..");
	scanf("\n%d",&td);
	m=(td%365)/30;
	printf("\n your month is..%d",m);
}
