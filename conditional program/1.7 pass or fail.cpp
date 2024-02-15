//accept mark from suser and check pass or fail
#include<stdio.h>
#include<conio.h>
main()
{
        int s1,s2,s3,s4,total;
        float pr;
        printf("enter sub mark:");
        scanf("%d",&s1);
      	printf("enter sub mark:");
      	scanf("%d",&s2);
    	printf("enter sub mark:");
        scanf("%d",&s3);
    	printf("enter sub mark:");
        scanf("%d",&s4);
    	total=s1+s2+s3+s4;
        pr=total/4;
        printf("\n pr%0.2f",pr);
            
            if(pr>=70)
            {
                      printf("\n result distiction");
            } 
           else  if(pr>=60)
            {
                      printf("\n result first class");
            } 
            else if(pr>=50)
            {
                      printf("\n result second class");
            } 
           else  if(pr>=40)
            {
                      printf("\n result pass class");
            }   
            else
            {
                      printf("\n you are fail"); 
            }            
       
       
}
