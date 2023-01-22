#include<stdio.h>
#include<string.h>
main()
{
	char a[]="beautiful big sky country",b[]="how now brown cow";
	// strlen
	printf("%d\n",strlen(a));
	printf("%d\n",strlen(a+8));
	printf("%s\n",a+10);
	// strcmp
	printf("%d\n",strcmp(a,b));
	// strcpy 
	printf("%s\n",a+9);
	// strcat
	strcat(b,"s!");
	printf("%s\n",b);
}
