//COUNT TOAL NUMBER OF WORDS IN A STRING

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,word=1;
	printf("Enter a String..");
	gets(a);
	i=0;
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		word++;
		i++;
	}
	printf("\n number of words %d",word);
}
