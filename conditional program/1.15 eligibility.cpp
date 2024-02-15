//check eligibility of admission::
#include<stdio.h>
main()
{
	float phy,maths,chem,total1,total2;
	printf("eligibility of admission..\n");
	printf("enter marks of physics : ");
	scanf("%f",&phy);
	printf("enter marks of maths : ");
	scanf("%f",&maths);
	printf("enter marks of chemistry : ");
	scanf("%f",&chem);
	total1=phy+maths+chem;
	printf("\n phy+maths+chem marks are..%f",total1);
	total2=maths+phy;
	printf("\n maths+phy marks are..%f",total2);
	
	if(total1>=190)
	{
		if(total2>=140)
		{
			if(maths>=65 && phy>=55 && chem>=50)
			{
				printf("\n candidate is eligible");
				
			}
		}
		
		else
		{
			printf("\n candidate is not eligible..");
		}	
		
	
	}
}
