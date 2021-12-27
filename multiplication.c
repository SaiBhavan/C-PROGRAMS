#include<stdio.h>
int main()
{
	int m,i=1,s=0,n=10;
	scanf("%d",&m);
	while(i<10)
	{
		printf("multiplication of %d" "x%d" "=",m,i);
		s=m*i;
		printf("%d\n",s);
		i++;
	}
}
