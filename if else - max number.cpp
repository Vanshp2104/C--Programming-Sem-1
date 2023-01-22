#include<stdio.h>
main()
{
	int a[10]={11,22,33,44,55,66,77,88,99,11};
	int max=0,i;
	for(i=0;i<=9;i++)
	{
	if (max<a[i])
	{
		max=a[i];
	}
	}
printf("%d",max);
}
