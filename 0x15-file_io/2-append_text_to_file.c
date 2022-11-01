#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int u, d, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	u = open(filename, O_WRONLY | O_APPEND);
	d = write(u, text_content, len);

	if (u == -1 || d == -1)
		return (-1);

	close(u);

	return (1);
}
