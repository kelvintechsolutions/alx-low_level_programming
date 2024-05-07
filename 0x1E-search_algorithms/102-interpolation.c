#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search -it is a function that
 * searches for a value in a sorted array.
 * of int iterating using interpolation between gaps of index.
 * @array: it is the type pointer of given array.
 * @size: it is the type size of elements in the array.
 * @value:it is the type value to be searched.
 * Return: Value, or -1 if value not present.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) *
			   (value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			high = i - 1;
		}
		else
		{
			low = i + 1;
		}
	}
	return (-1);
}
