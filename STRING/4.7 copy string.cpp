//TO DISPLAY COPY STRING

#include<stdio.h>
#include<string.h>
main()
{
	char str1[50],str2[50];
	printf("Enter the string..");
	gets(str1);
	strcpy(str2,str1);
	printf("Copied string is..%s",str2);
}
