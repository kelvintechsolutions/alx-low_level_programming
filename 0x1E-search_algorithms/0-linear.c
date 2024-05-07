#include "search_algos.h"

/**
 * linear_search -it is a function that searches for a value
 * in an array of intengers.
 * @array: it is the type poiter of given array.
 * @size: it is the type size of elements in the array.
 * @value: it is the type value to be searched.
 * Return: Value, or -1 if value not present(unsuccessful).
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
