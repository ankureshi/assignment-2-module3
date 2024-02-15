//check num is positive negative or zero
#include<stdio.h>
#include<conio.h>
main()
{
	int nm;
	printf("enter your number");
	scanf("%d",&nm);
	if(nm<=10)
	{
		printf("your number is positive");
	}
	else if(nm>=10)
	{
		printf("your number is negative");
	}
	else
	{
		printf("yourr number is zero");
	}
		
	
}
