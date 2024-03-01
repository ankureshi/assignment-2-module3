//COMPARE TWO STRINGS

#include<stdio.h>
#include<string.h>
main()
{
	char a[20],b[20];
	int i,f=0;
	printf("Enter 1 string..");
	gets(a);
	printf("Enter 2 string..");
	gets(b);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]!=b[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("Strings are not same..");
	}
	else
	{
		printf("strings are same");
	}	
}
