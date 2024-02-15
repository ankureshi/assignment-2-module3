//Input electricity unit charge and calculate total bill according to condition..//

#include<stdio.h>
main()
{
	int u,s; 
	float amt,t;
	printf("enter your consumed unit..");
	scanf("%d",&u);
	
	if(u<=50)
	
	{
		amt=0.5*u;
		printf("your amount of bill is rs.%0.2f\n",amt);
	}
	else if (u<=150)
	{
		amt=(0.5*50) + (0.75*(u-50));
	}
	else if(u<=250)
	{
		amt=(0.5*50) +(0.75*100) + (1.20*(u-150));
	}
	else
	{
		amt=(0.5*50) +(0.75*100) + (1.20*100) + (1.50*(u-250));
	}
	s=amt*20/100;
	printf("your additional surcharge of bill is..%d\n",s);
	t=amt+s;
	printf("your total bill amount is..%d",t);
}
