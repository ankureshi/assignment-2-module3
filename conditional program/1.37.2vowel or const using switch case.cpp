// vowel or constant using switch case:://
#include<stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet..");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A': printf(" A is vowel");
				break;
		
		case 'E': printf("E is vowel");
		break;
		case 'I': printf("I is vowel");
		break;
		case 'O': printf("O is vowel");
		break;
		case 'U': printf("U is vowel");
		break;
	
		default:
			   printf("this alphabet is constant");
			   break;
	}
	
}
