#include<stdio.h>
main()
{
	int x1,x2,x3,y1,y2,y3;
	printf("Enter the values=");
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	int m1=(y2-y1)/(x2-x1) , m2=(y3-y2)/(x3-x2);
	if (m1==m2)
	{
		printf("The points are collinear.");
	}
	else 
	{
		printf("The points are not collinear.");
	}
	}
