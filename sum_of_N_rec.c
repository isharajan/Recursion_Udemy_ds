#include<stdio.h>

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return sum(n-1)+n;
}
void main()
{
	int n;
	printf("enter number" );
	scanf("%d",&n);
	int res = sum(n);
	printf("sum of %d number =  %d\n",n,res );
}