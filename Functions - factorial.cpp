#include<stdio.h>
int fact(int);
main()
{
	int f,n;
	printf("Enter your number-");
	scanf("%d",&n);
	f=fact(n);
	printf("%d",f);
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}
