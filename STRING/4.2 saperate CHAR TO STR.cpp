//TO DISPLAY A SEPARATE CHARACTER FROM A STRING
#include<stdio.h>
#include<string.h>
main()
{
	char str[50];
	int length,i;
	printf("Enter a String..\n");
	fgets(str,sizeof(str),stdin);
	
	length=strlen(str);
	
	printf("Individual characters..\n");
	for(i=0;i<length;i++)
	{
		printf("%c \n ",str[i]);
	}
	
}
