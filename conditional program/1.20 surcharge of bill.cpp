//If bill exceed rs.800 then a surcharge of 18% will be charge and 
//the minimum bill should be rs.256/-
#include<stdio.h>
 int main()
{
	int amt;
	float s;
	printf("enter bill amount..");
	scanf("%d",&amt);
	{
		if(amt<=256 && amt>=800	)
		{
			s=amt*18/100;
			printf("surcharge of amount bill is..%f\n",s);
		}
	}
}

