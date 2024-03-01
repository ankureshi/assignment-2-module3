//CHECK THE NUMBER IS ODD OR EVEN USING ARRAY

#include<stdio.h>
main()
{
	int a[5];
	int i;
	printf("Enter any number");
	for(i=0;i<5;i++)
	{
		scanf("\n%d",&a[i]);
	}
	printf("\nEven numbers in the array are::");
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n %d",a[i]);	
		}
	}
	printf("\nOdd numbers in the array are::");
	for(int i=0;i<5;i++)
	{
		if(a[i]%2==1)
		{
			printf("\n %d",a[i]);	
		}
	}
		
	
}
