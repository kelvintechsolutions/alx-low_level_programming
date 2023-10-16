#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array.
 * @b: params.
 * @m: params.
 */
void print_array(int *b, int m)
{
	int x = 0;

	for (; x < m; x++)
	{
		printf("%d", *(b + x));
		if (x != (m - 1))
			printf(", ");
	}
	printf("\m");
}
