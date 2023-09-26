#include <stdio.h>
/**
 * set_string - setss a valua of pointer to char
 * @s: the value to be set
 * @to: the value to be changed
 * return: return none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
