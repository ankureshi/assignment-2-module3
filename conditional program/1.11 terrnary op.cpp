//check odd or even using ternary operator
#include<stdio.h>
main()
{
	int a;
	printf("enter the number..");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even number\n",a):printf("%d is odd number" ,a);
}
