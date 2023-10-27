#include "main.h"

/**
 * _isupper -it  checks the uppercase.
 * @c: it is the parametre.
 * Return: 0 if successful 1 if unsuccessful.
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
