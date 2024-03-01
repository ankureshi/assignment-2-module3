//TO PRINT NUMBER OF STUDENS AND NAME STORE IN ARRAY

#include<stdio.h>
main()
{
	int n,i;
	char nm[5][20];
	printf("enter number of students..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter your name::");
		scanf("%s",&nm[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\nname is..%s",nm[i]);
	}	
}
