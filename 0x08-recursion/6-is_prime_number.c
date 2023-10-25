#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number -it Returns if a nuber is prime.
  * @n:it is  the nuber to be checked.
  * Return:success( integer value).
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime -it Checks if the nuber is prime.
  * @n: it is the nuber to be checked.
  * @i: it is the iteration times.
  *
  * Return: success if 1 for prime or fail if 0 composiite.
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
