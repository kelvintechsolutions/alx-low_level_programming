#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome -it checks if a strig is a palindrome.
 * @s: it is the strig to reverse.
 * Return: 1 if it is success, 0 it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion -it  returns the length of a strig.
 * @s:it is the strig to calculate the length of.
 * Return:success( length of the string).
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal -it checks the characters recursively for palindrome.
 * @s:it is the strig to check.
 * @i:it is the iterator.
 * @len:it is the length of the strig.
 * Return: 1 if palindrome(success), 0 if not(failed).
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
