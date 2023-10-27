#include "main.h"
/**
 * _isalpha -it is  a function that checks for alphabetic char.
 * @c: input.
 * Return: 1 if c is  the letter (lower or uppercase), 0 (otherwise).
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
