//Check character is vowel or not::
#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("enter any character..");
	scanf("\n %c",&ch);
	
	if( ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u' )
	{
		printf("\n Your character is vowel");
	}
	else
	{
		printf("\n your input is wrong");
	}
}
