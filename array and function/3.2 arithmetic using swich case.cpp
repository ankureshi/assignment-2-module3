//PERFORM ALL ARITHMETIC OPERATORS USING SWITCH CASE
#include<stdio.h>
main()
{
	int a,b,ch;
	printf("Enter value of a..");
	scanf("%d",&a);
	printf("Enter value of b..");
	scanf("\n%d",&b);
	printf("\nEnter your choice..");
	printf("\nFor addition..press 1");
	printf("\nFor subtraction..press 2");
	printf("\nFor multiplcaition..press 3");
	printf("\nFor divison..press 4\n");

	scanf("\n %d",&ch);
	
	switch(ch)
	{
		case 1:
		ch=a+b;
		printf("addtion is..%d",a+b);
		break;
		
		case 2:
		ch=a-b;
		printf("subtraction is..%d",a-b);
		break;
			
		case 3:
		ch=a*b;
		printf("Multiplication is..%d",a*b);
		break;	
		case 4:
		ch=a/b;
		printf("Divison is..%d",a/b);
		break;
		default:
		printf("Enter correct option..");
		break;		
			
	}
	
}
