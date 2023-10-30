#include <stdio.h>
#include "main.h"
/**
 *create_array -it is an  array for prints a strig.
 *@size:it is the  nuber elements array.
 *@c: char.
 *Return: poiter.
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int position;

if (size == 0)
{
return (NULL);
}

/*it will Define value with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
position = 0;
while (position < size) /*While for an arrray*/
{
*(buffer + position) = c;
position++;
}

return (buffer);
}

}
