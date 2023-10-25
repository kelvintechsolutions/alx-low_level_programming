#include "main.h"
/**
 * factorial -it  returns the factorial of a given nuber.
 * @n: the nuber to find the factorials of.
 * Return:it returns the factorial of @n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
