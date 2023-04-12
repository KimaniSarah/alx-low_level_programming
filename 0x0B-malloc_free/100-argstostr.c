#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concentrate the arguments
 * @ac:the first string
 * @av:the second string
 *
 * Return:the conc string
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, pos, arg_length;
	char *arg, *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		arg_length = 0;
		while (*arg != '\0')
		{
			arg_length++;
			arg++;
		}
		total_length += arg_length + 1;
	}
	result = (char *) malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	pos = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg != '\0')
		{
			result[pos] = *arg;
			pos++;
			arg++;
		}
		result[pos] = '\n';
		pos++;
	}
	result[total_length - 1] = '\0';
	return (result);
}
