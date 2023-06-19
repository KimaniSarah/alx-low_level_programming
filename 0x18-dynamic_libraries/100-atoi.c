#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int h = 1;
	int x = 0;
	unsigned int v = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			h *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		v = (v * 10) + (s[x] - '0');
		x++;
	}
	v *= h;
	return (v);
}

