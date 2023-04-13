#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concentrates 2 strings
 * @s1:the first string
 * @s2:the second string
 * @n:number of bytes of s2 to be concentrated into s1
 * Return:NULL if unsuccessful & pointer if successful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_s1 = s1;
	char *ptr_s2 = s2;
	char *ptr;
	int len_s1 = 0;
	int len_s2, h;
	unsigned int v;

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
	ptr = (char *)malloc(sizeof(char) * len_s1 + n + 1);
	for (h = 0; h < len_s1; h++)
	{
		ptr[h] = s1[h];
	}
	for (v = 0; v < n; v++)
	{
		ptr[h + v] = s2[v];
	}
	ptr[h + n] = '\0';
	return (ptr);
}
