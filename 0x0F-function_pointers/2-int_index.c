#include "function_pointers.h"

/**
 * int_index -it will search for an intenger.
 * @array:it is the input intenger array
 * @size:it is the size of the array
 * @cmp:it is the poiter to the function to compare
 * Return:it will return index of the first element for that the cmp
 * fuction does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
