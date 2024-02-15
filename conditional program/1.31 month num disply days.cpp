//31.write a program to read any month number of integer and display the number
//of days of this month.
#include<stdio.h>
main()
{
	int n;
	printf("enter the month number ::");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("month have 31 days..");
			break;
		case 2:
			printf(" month have 28 days..");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("month have 30 days..");
			break;
		default:
			printf("enter valid number..");	
					
		
	}
	
}
