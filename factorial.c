#include<stdio.h>
   int fact(int x);

    int main(void)
{
	int n;
	printf("enter value of n");
	scanf("%d",&n);
	int g=fact(n);
	printf("factorial is %d",g);
	return 0;
}

int fact(int x)
{
	int i,f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
