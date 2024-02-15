#include<stdio.h>
#include<conio.h>
main()
{
	char fname[20],mname[20],lname[20];
	printf("enter first name, enter middle name,enter last name\n");
	scanf("%s,%s,%s",fname,mname,lname);
	printf("abbreviated name..");
	scanf(".%s .%s %s \n", fname,mname,lname);
	
}
