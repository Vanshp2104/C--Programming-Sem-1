#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,t,a[10]={10,9,8,7,5,3,6,4,2,1};
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
printf("Enter the kth number to be found:");
scanf("%d",&k);
printf("%d",a[10-k]);
}
