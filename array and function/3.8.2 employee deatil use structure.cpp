//dIPLAY EMPLOYEE DETAIL USE FUNCTION::

#include<stdio.h>
struct employee
{
	int eno;
	char enm[20];
	int age;
	char address[20];
	
};
main()
{
	employee emp[20];
	int i,n;
	printf("Enter number of employees..");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter your employee no.:",i+1);
		scanf("%d",&emp[i].eno);
		printf("Enter employee name:",i+1);
		scanf("\n%s",&emp[i].enm);
		printf("Enter employee age:",i+1);
		scanf("\n%d",&emp[i].age);
		printf("Enter employee address:",i+1);
		scanf("\n%s",&emp[i].address);
		
	}
	for(i=0;i<n;i++)
		{
			printf("\n Number[%d]is =%d",i+1,emp[i].eno);
			printf("\n Name[%d]is =%s",i+1,emp[i].enm);
			printf("\n Age[%d]is= %d",i+1,emp[i].age);
			printf("\n Address[%d]is= %s",i+1,emp[i].address);
		}
	
}
