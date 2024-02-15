//Calculate profit and loss on transaction::
#include<stdio.h>
main()
{
	int p, sp,profit,loss;
	printf("enter the price");
	scanf("%d",&p);
	printf("enter the selling price");
	scanf("%d",&sp);
	if(sp>p)
	{
		profit=sp-p;
		printf("\n profit on transaction is..%d",profit);
    }
	else if(p>sp)	
	{
	
		loss=p-sp;
		printf("\n loss on transaction is..%d",loss);
	}
	else
	{
		printf("\n no profit or no loss..");
	}
}
