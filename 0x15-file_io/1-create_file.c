#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: is the file to create
 * @text_content: file content
 * Return: 1 on success or -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if(!filename)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content)
	{
		write(file_descriptor, text_content, strlen(text_content));
	}
	close(file_descriptor);
	return (1);
}
