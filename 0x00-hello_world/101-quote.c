#include <stdio.h>
/**
 * main -prits a line
 *
 * Return: outputs one if successful
 */
int main(void)
{
	FILE *stderr = stderr;
	char *message = "and that piece of art is useful" " - Dora Korpar, 2015-10-19";
	int length = strlen(message);
	fwrite(message, 1, length, stderr);
	fputc('\n', stderr);
	return (1);
}
