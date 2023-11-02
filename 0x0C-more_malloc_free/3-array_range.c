#include "main.h"

/**
* array_range -it wil create an array of integers .
* @min:it is the smallest nuber in the array.
* @max:it is the lagrest nuber in the array.
* Return: poiter to the address of the memoy block.
*/

int *array_range(int min, int max)
{
	int *block;
	int h, k = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (h = min; h <= max; h++)
		{
			block[k] = h;
			k++;
		}
		return (block);
	}
	else
		return (NULL);

}
