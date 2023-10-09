#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:success
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
