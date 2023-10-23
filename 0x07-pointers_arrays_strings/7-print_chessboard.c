#include "main.h"

/**
  * print_chessboard -it  Prints the chessboard.
  * @x: array of pieces.
  * Return: success.
  */
void print_chessboard(char (*x)[8])
{
	int y, z;

	for (y = 0; y < 8; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(x[y][z]);
		}

		_putchar('\n');
	}
}
