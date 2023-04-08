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
	char *p_accept;

	while (*p_s != '\0')
	{
		p_accept = accept;
		while (*p_accept != '\0')
		{
			if (*p_accept == *p_s)
			{
				break;
			}
			p_accept++;
		}
		if (*p_accept == '\0')
		{
			break;
		}
		p_s++;
	}
	return (p_s - s);
}
