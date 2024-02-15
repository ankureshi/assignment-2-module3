#include<stdio.h>
main()
{
	int h,m,s;
	printf("enter minute..");
	scanf("%d",m);
	
	h=m/60;
	s=m/3600;
	printf("\n second is..%d",s);
	printf("\n hour is..%d",h);
}

