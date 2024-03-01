//To print below output using for loop::
#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf(" %d ",j);
		}
		j++;
		printf("\n");
	}
}

//01 02 03....10
//11 12 13....20
//21..........30
//31..........40
//41..........50
