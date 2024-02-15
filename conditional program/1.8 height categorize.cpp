//Accept the height of person in cm and categorize the person according their height
#include<stdio.h>
#include<conio.h>
main()
{
	int height;
	printf("enter your height in centemeter..");
	scanf("%d",&height);
	if(height>170)
	{
		printf("you are long person");
	}
	else if(height<=150)
	{
		printf("your height is medium");
	}
	else
	{
		printf("your height is very short");
	}
		
	
}
