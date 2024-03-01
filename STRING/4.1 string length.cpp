//FIND STRING LENGTH

#include<stdio.h>
main()
{
	char s[100];
	int i=0;
	printf("Enter String..");
	scanf("%s",&s);
	while(s[i]!='\0')
	{
		i++;
	}
	printf("\n String length is %d",i);
}
