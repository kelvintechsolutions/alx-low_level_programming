#include "main.h"

/**
 * print_number - it prints an integer.
 * @x: input integer.
 * Return: no return.
 */
void print_number(int x)
{
unsigned int m, b, count;

if (x < 0)
{
_putchar(45);
m = x * -1;
}
else
{
m = x;
}

b = m;
count = 1;

while (b > 9)
{
b /= 10;
count *= 10;
}

for (; count >= 1; count /= 10)
{
_putchar(((m / count) % 10) + 48);
}
}
