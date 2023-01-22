#include<stdio.h>
main()
{
	int max=0,nextmax=0,i,a[5]={1,2,3,4,5};
for(i=0;i<=5;i++)
	{
	if (a[i]>max)
	{
	nextmax=max;
	max=a[i];
	}
	if(a[i]<max && a[i]>nextmax)
	{
	nextmax=a[i];
	}
	}
printf("%d %d",max,nextmax);	
}
