#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be read
 * @letters: number of letters in file
 * Return: the number of letters that was read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");
	char *buf = malloc(letters);
	ssize_t byteRead = fread(buf, 1, letters, file);
	ssize_t byteWrote = write(STDIN_FILENO, buf, byteRead);

	if (file == NULL)
	{
		return (0);
	}
	if (buf == NULL)
	{
		fclose(file);
		return (0);
	}
	if (byteRead < 0)
	{
		free(buf);
		fclose(file);
		return (0);
	}
	if (byteWrote < 0 || (size_t)byteWrote != (size_t)byteRead)
	{
		free(buf);
		fclose(file);
		return (0);
	}
	free(buf);
	fclose(file);
	return (byteRead);
}
