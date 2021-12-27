#include<stdio.h>
int main()
{
	int i=1,f=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("%d",f);
}
