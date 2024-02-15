#include<stdio.h>
//Calculate compound interest::
#include<math.h>
main()
{
	float  p,r,t,ci;
	printf("enter principal..\n");
	scanf("%f",&p);
	printf("enter rate..\n");
	scanf("%f",&r);
	printf("enter time..\n");
	scanf("%f",&t);
	ci=p * (pow(1+r/100),t);
	printf("your compound interest is..%f",ci);
	
}
