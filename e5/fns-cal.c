#include<stdio.h>
#include<conio.h>
int  addi( int a, int b)
{ 	return a+b;}	
int  sub( int a, int b)
{	return a-b;}	
int mul( int a, int b)
{	return a*b;}	
float qut( int a, int b)
{	return a/(1.0*b);}	

int main()
{
	int a,b;
	float c;
	char x;
	printf("enter the two opreands");
	scanf("%d %d",&a,&b);
	printf("enter the operator");
	scanf("%c",&x);
	scanf("%c",&x);
	switch(x)
	{   case '+' : c=addi(a,b); 
		           printf("sum=%g",c);
		           break;
	    case '-' : c=sub(a,b); 
		           printf("sub=%g",c);
		           break;
	   case '*' : c=mul(a,b);
		           printf("Mul=%g",c);
		           break;
	   case '/' : c=qut(a,b); 
		           printf("Div=%g",c);
		           break;
	     default :printf("you have entered wrong operator");
		           break;
	  }
	 getch();
}
