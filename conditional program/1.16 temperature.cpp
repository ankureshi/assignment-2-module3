//DIsplay suitable message  according to tempreture:: 
#include<stdio.h>
main()
{
	float temp,c;
	printf("enter temperature in centigrade");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("\n weather is freezy..");
	}
	else if(temp>=0  && temp<=10)
	{
		printf("\n weather is very cold..");
	}
	else if(temp>=10 && temp<=20)
	{
		printf("\n weather is cold..");
	}
	else if(temp>=20 && temp<=30)
	{
		printf("\n weather is hot..");
	}
	else if(temp>=30 && temp<=40)
	{
		printf("\n weather is very hot..");
	}
	
}
