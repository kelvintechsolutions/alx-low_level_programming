#include "main.h"
/**
 * _abs -it computes the absolute value of an integer.
 * @n:it is the int type number.
 * Return:t returns the absolute value of @n.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
