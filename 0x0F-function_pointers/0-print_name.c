#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -it is the function that prints  name.
 * @name: type char string poiter.
 * @f:it is the type poiter func & char is arg.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(EXIT_FAILURE);
	f(name);
}

