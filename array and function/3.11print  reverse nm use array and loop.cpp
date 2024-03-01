//PRINT REVERSE NUMBER USING ARRAY AND AUNCTION

#include<stdio.h>
main()
{
	int a[5],i;
	printf("Enter array element");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse array elements::");
	for(i=4;i>=0;i--)
	{
		printf(" %d ",a[i]);
	}
}
