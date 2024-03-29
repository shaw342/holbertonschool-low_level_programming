#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file
 * @text_content: texte
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;


	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		write(fd, text_content, i);
	}
	close(fd);

	return (1);

}
