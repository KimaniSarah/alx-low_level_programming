#include "main.h"
/**
 * set_string -  sets the value of a pointer to a char.
 * @s:variable that stores the memory address of another pointer to a char.
 * @to: the string to set the pointer to.
 *
 * Return:s
 */
void set_string(char **s, char *to)
{
	*s = to;
}

