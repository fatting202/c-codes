#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int dec(int );
	int a,x,y;
	printf("enter the number");
	scanf("%d",&a);
	y=a;
	x=dec(a);
	printf("(%d)2=(%d)10",y,x);
	 getch();
}
int dec(int a)
{  
	int i,r,sum=0;
	     for(i=0;a>0;i++)
     {  
		 r=pow(2,i);
		 sum+=a%10*r;
		 a/=10;
	 }
	return sum;
}	


