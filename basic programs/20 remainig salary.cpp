#include<stdio.h>
//Accept monthly salary from user and diduct 10% insurance,10% loan Emi .find out 
//remainig salary
#include<conio.h>
main()
{
	float s,pi,la,rs;
	printf("\n enter salary");
	scanf("%f",&s);
	printf("\n enter premium insurance");
	scanf("%f",&pi);
	printf("\n enter loan amount");
	scanf("%f",&la);
	
	pi=s*10/100;
	scanf("your premium insurance is..%f",pi);
	la=s*10/100;
	scanf("your loan installment is..%f",la);
	rs=s-pi-la;
	printf("\n your remaining salary is..%f",rs);
	
}
