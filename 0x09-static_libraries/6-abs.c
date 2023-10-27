#include "main.h"
/**
 * _abs -it is  a function that computes the absolute value of an intenger.
 * @ab:it is a  intenger input.
 * Return: success (absolute value of ab)
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
