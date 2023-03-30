#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s:the input string to be encoded
 *
 * Return: the output_string
 */
char *leet(char *s)
{
	int i, j;
	char *leetspeak = "aAeEoOtTlL";
	char *replacements = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leetspeak[j])
			{
				s[i] = replacements[j];
			}
		}
	}
	return (s);
}

