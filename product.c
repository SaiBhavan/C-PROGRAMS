#include<stdio.h>
void product(int a,int b, int c)
{
	int x=a*b*c;
	printf("%d\n",x);
}
int main(void)
{
	product(2,3,4);
	product(5,6,7);
}
