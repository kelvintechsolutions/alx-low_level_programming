#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers -it is a function that print numbers.
 * @n:it is a type unsigned int nuber of int passed to a function.
 * @separator:it is a  type char poiter string to be printod between numbers.
 * Return: 0 if success.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int x = n;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	if (x--)
		printf("%d", va_arg(valist, int));
	while (x-- > 0)
		printf("%s%d", separator, va_arg(valist, int));
	printf("\n");
	va_end(valist);
}
