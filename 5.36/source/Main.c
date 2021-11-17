#include <stdio.h>


void tower(int c, int start, int end, int temp);

int main()

{

	int n;


	printf("%s", "Enter the starting number of disks: ");

	scanf_s("%d", &n);


	tower(n, 1, 3, 2);

}

void tower(int c, int start, int end, int temp)

{

	if (1 == c)

	{

		printf("%d --> %d\n", start, end);

		return;
	}

	tower(c - 1, start, temp, end);

	printf("%d --> %d\n", start, end);

	tower(c - 1, temp, end, start);

}
