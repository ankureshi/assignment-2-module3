//Input week number and print week day::
#include<stdio.h>
main()
{
	int w;
	printf("enter the number of week..");
	scanf("%d",&w);
	if(w==1)
	{
		printf("monday");
	}
	else if(w==2)
	{
		printf("tuesday");
	}
	else if(w==3)
	{
		printf("wednesday");
	}
	else if(w==4)
	{
		printf("thursday");
	}
	else if(w==5)
	{
		printf("friday");
	}
	else if(w==6)
	{
		printf("saturday");
	}
	else if(w==7)
	{
		printf("sunday");
	}
	else
	{
		printf("plz enter correct input..");
	}
}
