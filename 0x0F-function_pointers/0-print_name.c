#include "function_pointers.h"

/**
 * print_name -it will  print a name.
 * @name:it is the input name.
 * @f:it is a  function poiter.
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
