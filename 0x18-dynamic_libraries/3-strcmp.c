#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0 is s1 & s2 are same,< 0 if s1<s2 ,> 0 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int h = 0;

	while (s1[h] != '\0' && s2[h] != '\0')
	{
		if (s1[h] != s2[h])
		{
			return (s1[h] - s2[h]);
		}
	h++;
	}
	return (0);
}

