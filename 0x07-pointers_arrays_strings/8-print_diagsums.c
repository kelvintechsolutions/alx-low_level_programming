#include "main.h"

/**
  * print_diagsums -it Print the sum of two diagonals of square matrixes.
  * @x: the matrixes.
  * @size: the size.
  * Return: success.
  */
void print_diagsums(int *x, int size)
{
	int y, sum1 = 0, sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += x[(size + 1) * y];
		sum2 += x[(size - 1) * (y + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
