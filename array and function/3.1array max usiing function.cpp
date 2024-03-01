//FIND MAX NUMBER USING ARRAY AND FUNCTION:

#include<stdio.h>
void max()
{
	int id[5]={1,2,3,4,5};
	int i;
	for(int i=0;i<5;i++)
	{
		if(id[0]<id[i])
		{
			id[0]=id[i];
		}
	}
	printf("\n max number from array ::%d",id[0]);
}
main()
{
	max();
}

