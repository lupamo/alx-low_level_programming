#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints the sum of arguments
 * @argc: counts arguments of program
 * @argv: stores arguments of argc in array
 * Return: 0 after success of program
 */
int main(int argc, char *argv[])
{
	int j;
	unsigned int l, adding = 0;
	char *argm;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			argm = argv[j];

			for (l = 0; l < strlen(argm); l++)
			{
				if (argm[l] < 48 || argm[l] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			adding += atoi(argm);
			argm++;
		}
		printf("%d\n", adding);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
