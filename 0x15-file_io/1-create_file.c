#include "main.h"

/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int u, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	d = write(u, text_content, len);

	if (u == -1 || d == -1)
		return (-1);

	close(u);

	return (1);
}
