#include<stdio.h>
void fibo(int f1,int f2,int n)
{
	int f3 = f1+f2;

	printf("%d\n",f3);
	
		
	f1 = f2;
	f2 = f3;

	if(f3<n)
	{
		fibo(f1,f2,n);
	}
}

void main()
{
	int f1,f2,n;

	printf("enter number");
	scanf("%d",&n);

	f1=0;
	f2=1;
	fibo(f1,f2,n);
}