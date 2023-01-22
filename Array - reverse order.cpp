#include<stdio.h>
main()
{
	int i,a[]={1,2,3,4,5};
	int length=sizeof(a)/sizeof(a[0]);
	printf("The reverse order is:");
	for(i=length-i;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
