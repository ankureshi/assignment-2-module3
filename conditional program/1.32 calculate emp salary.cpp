//Input basic salary of employee and calculate gross salary(gs) according (hra,da)
#include<stdio.h>
main()
{
	float bs,gs,hra,da;
	printf("\n enter emp bsalary..");
	scanf("%f",&bs);
	if(bs<=10000)
	{
	
	 hra=bs*20/100;
	 da=bs*80/100;
	 gs=bs+hra+da;
	
	}
	
	else if(bs<=20000)
	{
	 hra=bs*25/100;
	 da=bs*90/100;
	 gs=bs+hra+da;
    }
	else if(bs>20000)
	{
	 hra=bs*25/100;
	 da=bs*90/100;
	 gs=bs+hra+da;
		
	}
	else
	{
		printf("\n enter correct value");
	}
	printf("\n your hra is..%f",hra);
	printf("\n your da is..%f",da);
	printf("\n your gs is..%f",gs);
}
