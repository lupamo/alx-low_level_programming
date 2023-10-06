#include <stdio.h>
#include <stdlib.h>
/**
 *_print - moves a string one place to the left and prints the string
 * @str: string to check
 * @l: bytes of string
 * Return: none
 */
void _print(char *str, int l)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	free(str);
}

/**
* mul - multiplies  char with  string
* @n: to multiply
* @num: to multiply
* @num_index:0 index of num
* @dest: multiplication storage
* @dest_index: highest index
*
* Return: pointer to dest, or NULL on failure
*/
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulptr, add, addptr;

	mulptr = 0;
	addptr = 0;

	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulptr;
		mulptr = mul / 10;
		add = (dest[k] - '0') + (mul % 10) + addptr;
		addptr = add / 10;
		dest[k] = add % 10 + '0';
	}

	for (addptr += mulptr; k >= 0 && addptr; k--)
	{
		add = (dest[k] - '0') + addptr;
		addptr = add / 10;
		dest[k] = add % 10 + '0';
	}

	if (addptr)
	{
		return (NULL);
	}
	return (dest);
}

/**
* check_dig - makes sure args are digits
* @arv: ptr to arguments
* Return: 0 if digits, 1 if not
*/

int check_dig(char **arv)
{

	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; arv[i][j]; j++)
		{
			if (arv[i][j] < '0' || arv[i][j] > '9')
			return (1);
		}
	}
	return (0);
}

/**
* init - inits a string
* @str: sting to initialize
* @l: length of string
* Return: void
*/

void init(char *str, int l)
{
	int j;

	for (j = 0; j < l; j++)
		str[j] = '0';
		str[j] = '\0';
}

/**
* main - multiply two nums
* @argc: number of args
* @argv: argument vctr
* Return: zero, or 98 if failure
*/

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;

	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_dig(argv))
	{
		for (ti = 0; e[ti]; ti++)
		putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
	;
	for (l2 = 0; argv[2][l2]; l2++)
	;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));

	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
		putchar(e[ti]);
		exit(98);
	}

	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
			putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
