T//TO CALCUTE NUMBER OF ALPHABET,DIGIT AND SPECIAL CHARACTER IN STRING
#include<stdio.h>
#include<string.h>
main()
{
	char  str[50];
	int alp=0,digit=0,sc=0,i=0;
	printf("Enter the string..");
	gets(str);
	while(str[i]!='\0')
	{
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
		{
					alp++;
		}
		else if((str[i]>='0'&& str[i]<='9'))
		{
			digit++;
		}
		else 
		{
			sc++;
			
		}
		i++;
	}
	printf("no.of alphabets in the string..%d",alp);
	printf("\n no.of digits in the string..%d",digit);
	printf("\n no.of sp.char in the string..%d",sc);
}
