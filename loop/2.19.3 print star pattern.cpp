#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("_");
		}
		for(k=1;k<=(i*2)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

				//                *
				//               ***
				//				*****
				//			   *******
				//			  *********
