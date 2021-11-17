#include <stdio.h>

long power(long base, long exponent); // function prototype

int main(void)
{
	long b; // base

	long e; // exponent

	printf("%s", "Enter a base and an exponent: ");
	scanf_s("%ld%ld", &b, &e);
	printf("%ld raised to the %ld is %ld\n", b, e, power(b, e));
}

long power(long base, long exponent)
{
	if (0 == exponent) 
	{
		return 1;
	}
	 else if (1 == exponent)
	{
		return base;
	}
	else
	{
		return base * power(base, exponent - 1);
	}
}