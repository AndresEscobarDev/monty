#include "monty.h"
/**
 * split_string - divide a string into several within a double pointer.
 * @entrada: string.
 * @d: delimiter.
 * Return: The new double pointer.
 */
char **split_string(char *entrada, char d)
{
	int i = 0, j = 1, k = 0, len = 0, n  = 0, f = 0;
	char **argumento = NULL;

	if (!entrada || (entrada[0] == '#' && d == ' '))
		return (argumento);
	n = strlen(entrada);
	for (f = 0; entrada[f] && (((d != ' ' || (entrada[f + 1] &&
	entrada[f + 1] != '#'))) || entrada[f] != ' '); f++)
		j++;
	argumento = malloc(sizeof(char *) * (j + 1));
	if (!argumento)
	{
		print_mallocfail();
		return (NULL);
	}
	for (len = 0, i = 0; i < n && entrada[i] && i <= f; i++)
	{
		len = 0;
		j = i;
		for (; entrada[j] && (entrada[j] != d);)
			len++, j++;
		argumento[k] = malloc(sizeof(char) * (len + 1));
		if (!argumento[k])
		{
			free_argument(argumento);
			print_mallocfail();
			return (NULL);
		}
		for (j = 0; entrada[i] && (entrada[i] != d); i++, j++)
			argumento[k][j] = entrada[i];
		argumento[k][j] = 0;
		k++;
		argumento[k] = NULL;
	}
	return (argumento);
}
