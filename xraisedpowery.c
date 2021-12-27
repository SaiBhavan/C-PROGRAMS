#include<stdio.h>
int main()
{
	int x,y,s,i;
	scanf("%d%d",&x,&y);
	s=1;
	i=1;
	while(i<=y)
	{
		s=s*x;
		i++;
	}
	printf("\n x raised to power y %d",s);
}
