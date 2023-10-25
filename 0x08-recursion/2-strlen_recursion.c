#include "main.h"

/**
 * _strlen_recursion -it is supposed to  returns the length of a strig.
 * @s: it is the strig to calculate the length of.
 * Return: it returns the length of the strig.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
