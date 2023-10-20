#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII – it determine if n is a printable ASCII char.
 * @n: AN integer.
 * Return: 1 if true, 0 if false.
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes – it prints hex values for string b in formatted fom.
 * @b: it is a string to print.
 * @start: the starting positon.
 * @end: the Ending positon.
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII – it will print ASCII values for string b,
 * formatted to replace non-printable chars with '.'.
 * @b: it is a  string to print.
 * @start: the starting position.
 * @end: the ending positiion.
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer – it will prints a bufer.
 * @b: represents a string.
 * @size: it is the size of bufer.
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
