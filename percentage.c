#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float g;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e),
	g=a+b+c+d+e/500;
	if(g>90)
	{
		printf("A");
	}
	else
	if(g>80)
	{
		printf("B");
	}
	else
	if(g>70)
	{
		printf("C");
	}
	else
	if(g>40)
	{
		printf("D");
	}
	else
	if(g<40)
	{
		printf("E");
	}
}

