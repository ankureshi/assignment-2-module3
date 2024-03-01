//PRINT REVERSE STRING TO A STRING
#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter name..");
	scanf("%s",&name);
	
	printf("\n name is..%s", name);
	printf("\n reverse name =%s",strrev (name));
}
