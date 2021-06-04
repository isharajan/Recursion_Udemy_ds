#include<stdio.h>
int exponent(int base, int power)
{
	if(power==0)
	{
		return 1;
	}
	return exponent(base,power-1)*base;
}

void main()
{
	int base,power;
	printf("enter base and power");
	scanf("%d %d",&base,&power);
	int res = exponent(base,power);
	printf("%d ^ %d = %d\n",base,power,res );
}