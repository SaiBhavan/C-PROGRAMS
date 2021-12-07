#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n>0)
	printf("number is +ve");
	else if (n<0)
	printf("number is -ve");
	else
	printf("number is zero");
}
