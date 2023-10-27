#include "main.h"

/**
 * _isdigit -it is an input.
 * Description:it defines if a character is a nuber.
 * @c: charater.
 * Return: 1(successful) 0(unsuccessful).
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
