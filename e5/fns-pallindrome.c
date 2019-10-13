#include<stdio.h>
#include<conio.h>
int main()
{
	int pal(int );
	int a,x;
	printf("enter the number");
	scanf("%d",&a);
	x=pal(a);
	if(x)
	   printf("its pallindrome");
	 else
	   printf("its not a pallindrome");
	
	 getch();
}
int pal( int a)
{  
	int x,r=0;
     
     x=a;
     for( ;a>0; )
     {  
		  r=r*10+a%10;
		
		 a/=10;
	 }
	 if(x==r)
	  return 1;
	 else
	   return 0;
}	

