#include "main.h"

/**
  * create_file-creates a file and fills it with text.
  * @filename:it is a type char filename poiter.
   *@text_content:type char pointer of char.
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}

/**
  * _strlen -itreturns the length of a strig.
  * @s:it is the string to count.
  * Return:it will return the string length.
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
