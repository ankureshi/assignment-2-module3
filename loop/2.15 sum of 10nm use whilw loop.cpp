//Sum of 10 numbers using while loop::

#include<stdio.h>
main()
{
	int i, s=0;
	i=1;
	
	while(i<=10)
	{
		s=s+i;
		i=i+1;
		
	}
	printf("sum of natural number is %d",s);
}
