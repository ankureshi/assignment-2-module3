#include<stdio.h>
struct employee
{
	char name[20];
	int s;
}
main()
{
	struct employee e[5];
	int i;
	
	for(i=0; i<5;i++)
	printf("enter employee name..");
	scanf("%s",&e[i].name);
	printf("enter salary..");
	scanf("%d",&e[i].s);
	printf("data of all employee");
	for(i=0; i<5;i++)
	{
	}
	return 0;
}
