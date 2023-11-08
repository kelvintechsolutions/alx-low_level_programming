#include "function_pointers.h"

/**
  * print_name -it will prints a name.
  * @name:it is  the name to prints
  * @f:it is the Ponter to fuction.
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
