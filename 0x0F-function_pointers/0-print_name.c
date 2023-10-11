#include  <stdio.h>
/**
 * print_name - a function that prints a name
 * @name: name argument to be printed
 * @f: a function pointer to a print function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
