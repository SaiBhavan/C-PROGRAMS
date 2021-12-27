#include<stdio.h>
int main()
{
	int n=0,s=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		s=s+1;
	}
	if(s==2)
	printf("is prime number");
	else
	printf("not a prime number");
}
