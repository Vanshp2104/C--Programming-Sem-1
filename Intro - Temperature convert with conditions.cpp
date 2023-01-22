#include<stdio.h>
main()
{
int c,f ;
printf("enter tempertrature in celsius:");
scanf("%d",&c);
f=(c*9/5)+32;
printf("Temprature in fahrenheit is f=%d",f);
if (f>108)
{
	printf("fever");
}
}
