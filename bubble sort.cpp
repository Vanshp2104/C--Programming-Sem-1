#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,t,a[10]={10,9,8,7,6,5,3,4,2,1};
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if (a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
for (i=0;i<=9;i++)
{
	printf("%d",a[i]);
}
}
