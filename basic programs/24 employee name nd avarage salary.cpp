//accpet 5 employees name and salary and calculate avarage of salary::
#include<stdio.h>
main()
{
	char name1[10],name2[10],name3[10],name4[10],name5[10];
	int s1,s2,s3,s4,s5,total,avg;

	printf("enter your name..");
	scanf("%s/n",name1);
	printf("enter your salary..");
	scanf("%d/n",&s1);
	printf("enter your name..");
	scanf("%s",name2);
	printf("enter your salary..");
	scanf("%d",&s2);
	printf("enter your name..");
	scanf("%s",name3);
	printf("enter your salary..");
	scanf("%d",&s3);
	printf("enter your name..");
	scanf("%s",name4);
	printf("enter your salary..");
	scanf("%d",&s4);
	printf("enter your name..");
	scanf("%s",name5);
	printf("enter your salary..");
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("employees total salary is..%d",total);
	avg=total/5;
	printf("total avarage salary is..%d",avg);
}
