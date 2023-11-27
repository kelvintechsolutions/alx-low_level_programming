#include "main.h"

/**
* create_file -it will create a file and fills it with text.
* @filename: name of the file to create.
* @text_content:it is the text to write in the file.
* Return: it will return 1 if  success and-1 if failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
