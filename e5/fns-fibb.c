#include<stdio.h>
#include<conio.h>
int main()
{
	int fibbo(int );
	int a,y;
	printf("enter the no");
	scanf("%d",&a);
	y=fibbo(a);
	if(y)
	   printf("%d belongs to fibbonacci series",a);
	 else
	   printf("%d does not belong to fibbonacci series",a);
	
	
	 getch();
}
int fibbo( int a)
{  
	int d=0,s=0,t=1;
	for(;d<a;)
     {
		 d=s+t;
	      s=t;
		 t=d;
	 }
	if(d==a)
	  return 1;
	 else
	   return 0;
	
}	
