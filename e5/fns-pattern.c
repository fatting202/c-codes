#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	char a;
	 printf("enetr the char ");
     scanf("%c",&a);
     printf("enetr the number ");
     scanf("%d",&n);
    
     for(i=0;i<n;i++ )
     {  
	   for(j=0;j<=i;j++ )
	    {
			 printf("%c",a);
		 } 
	      printf("\n"); 
	 }
	
	 getch();
}

