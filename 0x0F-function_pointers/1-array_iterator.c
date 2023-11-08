#include "function_pointers.h"

/**
 * array_iterator -it will execute a function given as a parameter.
 * @array:it is the input integer array
 * @size:it is the  size of the array
 * @action:this is the poiter to the function
 * Return: 0(success)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
