//Check uppercase, lowercase,digit or special character 
#include<stdio.h>
main()
{
	char ch;
	int i;
	
	printf("enter character..");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("%c is uppercase\n",ch);
	
	}
	else if(ch >=97 && ch<=122)
	{
		printf("%c is lowercase \n ",ch);
		
	}
	else if(i<=1 && i<=10)
	{
		printf("%d is digit",i);
		
	}
	else
	{
		printf("%c is a special character\n", ch);
	}
}
