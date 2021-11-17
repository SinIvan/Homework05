#include <stdio.h>

int lcm(int x, int y);

int main()

{

	unsigned int j;

	int a;

	int b;

	for (j = 1; j <= 5; ++j)

	{

		printf("%s", "Enter two integers: ");

		scanf_s("%d%d", &a, &b);

		printf("The laest Common Multiple"

			"of %d and %d is %d\n\n", a, b, lcm(a, b));

	}

}

int lcm(int x, int y)

{

	int i;

	int greatest = 1;

	for (i = 2; i <= ((x < y) ? x : y); ++i)

	{

		if (x % i == 0 && y % i == 0)

		{

			greatest = i;

		}

	}
	return greatest;

}