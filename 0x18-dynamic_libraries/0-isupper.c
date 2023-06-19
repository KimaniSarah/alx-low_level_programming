#include "main.h"
/**
 * _isupper - identify uppercase character
 * @c: character to be identified
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
