#include<stdio.h>
int main()
{
	int i=650;
	int mod=0;
	while(i<=900)
	{
		mod=i%5;
		if(mod==0)
		{
			printf("%d is divisible by 5\n",i);
		}
		i++;
	}
	
}
