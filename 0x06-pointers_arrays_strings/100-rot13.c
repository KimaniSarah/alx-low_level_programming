#include "main.h"
/**
 * rot13 - encodes input string
 * @s: the input string to be encoded
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char *upper_half = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *lower_half = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == upper_half[j])
			{
				s[i] = lower_half[j];
				break;
			}
		}
	}
	return (s);
}
