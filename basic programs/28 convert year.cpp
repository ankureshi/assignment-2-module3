#include<stdio.h>
main()
{
	int d,m,y;
	printf("enter your days..");
	scanf("\n%d",&d);
	m=(d%365)/30;
	printf("\n your month is..%d",m);
	y=d/365;
	printf("\n your year is..%d",y);
	
}
