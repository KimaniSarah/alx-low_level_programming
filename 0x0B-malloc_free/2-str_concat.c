#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1:the destination string
 * @s2:the source string
 * Return:conc string
 */
char *str_concat(char *s1, char *s2)
{
	int h, v, len_s2, len_total, len_s1;
	char *ptr, *ptr_s1, *ptr_s2;

	len_s1 = 0;
	ptr_s1 = s1;
	while (*ptr_s1 != '\0')
	{
		ptr_s1++;
		len_s1++;
	}
	len_s2 = 0;
	ptr_s2 = s2;
	while (*ptr_s2 != '\0')
	{
		ptr_s2++;
		len_s2++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_total = len_s1 + len_s2;
	ptr = (char *)malloc(sizeof(char) * len_total + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < len_s1; h++)
	{
		ptr[h] = s1[h];
	}
	for (v = 0; v < len_s2; v++)
	{
		ptr[h + v] = s2[v];
	}
	ptr[h + v] = '\0';
	return (ptr);
}
