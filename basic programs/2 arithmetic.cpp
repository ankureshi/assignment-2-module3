#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,mod;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	mod=a%b;
	printf("\nvalue of a=%d",a);
	printf("\nvalue of b=%d",b);
	printf("\naddition is %d",a+b);
	printf("\nsubtraction is %d",a-b);
	printf("\nmultiplication is %d",a*b);
	printf("\ndivison is %d",a/b);
	printf("\n modulo is %d",a%b);
	getch();
	
}
