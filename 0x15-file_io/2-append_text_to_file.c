#include "main.h"

/**
* append_text_to_file -it append text at the end of a file.
* @filename:it is the file to apped the text to.
* @text_content:it is the content to apped into the file.
* Return:it will return 1 if successful and -1 if unsuccessful.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
