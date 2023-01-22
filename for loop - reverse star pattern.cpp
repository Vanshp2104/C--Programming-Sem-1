#include<stdio.h>
main()
{
	int x;
	for(int i=0;i<=5;i++)
	{
		printf("\n ");
		for(int j=0;j<=5-i;j++)
		{
			printf("*");
		}
	}
}
