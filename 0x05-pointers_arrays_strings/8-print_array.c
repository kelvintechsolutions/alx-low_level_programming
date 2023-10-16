#include "main.h"
#include <stdio.h>

/**
 * print_array - print `n` elements of an array of integers.
 * @b: int type array pointer.
 * @n: int type integer.
 * _purchar can only be use to print.
 */

void print_array(int *b, int n)
{
	int x;

	x = 0;
	for (n--; n >= 0; n--, x++)
	{
		printf("%d", b[x]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
