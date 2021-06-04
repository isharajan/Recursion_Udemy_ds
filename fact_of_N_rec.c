#include<stdio.h>

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return fact(n-1)*n;
}
void main()
{
	int n;
	printf("enter number " );
	scanf("%d",&n);
	int res = fact(n);
	printf(" %d! =  %d\n",n,res );
}