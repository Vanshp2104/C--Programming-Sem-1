#include<stdio.h>		
main ()
{
	int a[4]={2,4,7,12};
	int b[6]={1,3,5,6,8,9};
	int c[10],i=0,j=0,k;
	for(k=0;k<=10;k++)
	{
		if (a[i]<b[j] && i<4)
		{
		c[k]=a[i];
		i++;
		}
		else
		{
		c[k]=b[j];
		j++;
		}
	}
	
		printf("The sorted array is :");
	
	for(k=0;k<10;k++)
	{
		printf("%d",c[k]);
	}
}
	

