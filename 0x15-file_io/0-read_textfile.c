#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be read
 * @letters: number of letters in file
 * Return: the number of letters that was read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ad;
	ssize_t byte_read;
	char *buff;

	buff = malloc(letters);
	if (filename == NULL)
	{
		return (0);
	}
	ad = open(filename, O_RDONLY);
	if (ad == -1)
	{
		return (0);
	}
	if (buff == NULL)
	{
		close(ad);
		return (0);
	}
	byte_read = read(ad, buff, letters);
	if (byte_read == -1 || byte_read != (signed int) letters)
	{
		close(ad);
		free(buff);
		return (0);
	}
	write(STDOUT_FILENO, buff, letters);
	close(ad);
	free(buff);
	return (byte_read);
}
