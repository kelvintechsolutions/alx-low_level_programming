#include "main.h"
/**
 * string_toupper – it changes all lowercase letters of  a string to uppercase.
 * @word: it is Poiter to string.
 *
 * Return: it is a Poiter to uppercase string.
 */
char *string_toupper(char *word)
{
	int length;

	length = 0;

	while (word[length] != '\0')
	{
		if (word[length] >= 97 && word[length] <= 122)
		{
			word[length] = word[length] - 32;
		}
		length++;
	}
	return (word);
}
