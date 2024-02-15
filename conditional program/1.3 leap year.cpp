//Check the year is leap year or not
#include<stdio.h>
#include<conio.h>
main()
{
		int year;
		printf("enter year");
		scanf("%d",&year);
		if(year%4==0)
		{
			printf("\n year is leap year");
		}
		else
		{	
			printf("\n year is not leap year");
		}
}
