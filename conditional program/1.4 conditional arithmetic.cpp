//calculate + - * / % using conditional statement::
#include<stdio.h>
main()
{
	int a,b;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	if(a>b && a+b)
	{
			printf("\n addtion is%d",a+b);
	}
    else if(a>b && a-b)
    {
    	printf("\n subtrsaction is%d", a-b);
	}
	else if(a<b && a*b);
	{
		printf("\n multiplication is %d",a*b);
	}
}	
	
	
