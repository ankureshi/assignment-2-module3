//Find minimum number among 3 numbers using ternary operator::
#include<stdio.h>
main()
{
	int x,y,z,min;
	printf("enter 1st number..");
	scanf("%d",&x);
	printf("enter 2nd number..");
	scanf("%d",&y);
	printf("enter 3rd number..");
	scanf("%d",&z);
	min=(x<y) ? (x<z?x:z) : (y<z?y:z);
	printf("\n minimum number is..%d",min);	
}
