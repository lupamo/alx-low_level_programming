#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name of the file to append too
 * @text_content: textt contents to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_wrote;

	file_descriptor = open(filename, O_APPEND | O_WRONLY);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	bytes_wrote = write(file_descriptor, text_content, strlen(text_content));
	if (bytes_wrote == -1)
	{
		close(file_descriptor);
	}
	if (file_descriptor == -1)
	{
		return (-1);
	}
	close(file_descriptor);
	return (0);
}
