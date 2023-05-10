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
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
