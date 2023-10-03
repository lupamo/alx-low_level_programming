#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * sumup - counts num of word in string
 * @s: string to check
 *
 * Return: 0
 */

int sumup(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - splits words to strin
 * @str: string to be splited
 * Return: nothing
 */

char **strtow(char *str)
{
char **sqr, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;

while (*(str + len))
len++;

words = sumup(str);
if (words == 0)
return (NULL);

sqr = (char **) malloc(sizeof(char *) * (words + 1));
if (sqr == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *)malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);

while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
sqr[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
sqr[k] = NULL;
return (sqr);
}
