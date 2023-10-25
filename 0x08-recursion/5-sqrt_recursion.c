#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
  * _sqrt_recursion -it Returns the natural square root of a nuber.
  * @n:it is the nuber to calculate the natural square root.
  * Return:success( the natural square root).
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt -it Calculates natural square root of a nuber.
  * @n: it is the nuber to calculate the natural square root.
  * @i:it iterates the nuber.
  *
  * Return:success (the natural square root).
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
