#include <stdio.h>

#define MAX 93

unsigned long long int fibonacci(unsigned int n);

int main()

{

	int loop;

	for (loop = 0; loop <= MAX; ++loop)

	{

		printf("fibonacci( %u ) = %llu\n", loop, fibonacci(loop));

	}

}

unsigned long long int fibonacci(unsigned int n)

{

	unsigned int j;

	unsigned long long int fib1 = 0;

	unsigned long long int fib2 = 1;


	for (j = 2; j <= n; ++j)
	{

		if (j % 2 == 0)

			fib1 += fib2;

		else

			fib2 += fib1;

	}

	if (n % 2 == 0)

		return fib1;

	else

		return fib2;

}