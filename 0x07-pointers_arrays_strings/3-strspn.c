#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s:the first string to be compared
 * @accept:the second string to compare with
 *
 * Return:length
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p_s = s;
	char *p_accept = accept;

	for (; *p_s != '\0'; s++)
	{
		for (; *p_accept != '\0'; p_accept++)
		{
			if (*p_accept == *p_s)
			{
				break;
			}
		}
		if (*p_accept == '\0')
		{
			break;
		}
	}
	return (p_s - s);
}
