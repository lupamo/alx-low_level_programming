#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - adds arguments to string
 * @ac: integer arument
 * @av: pointer argument
 * Return: null if not successful
 */
char *argstostr(int ac, char **av)
{
	int bc = 0, a = 0, b = 0, c = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (a < ac)
	{
		while (av[a][b])
		{
			bc++;
			b++;
		}
		b = 0;
		a++;
	}
	concat = malloc((sizeof(char) * bc) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			concat[c] = av[a][b];
			c++;
			b++;
		}
		concat[c] = '\n';

		b = 0;
		c++;
		a++;
	}
	c++;
	concat[c] = '\0';
	return (concat);
}
