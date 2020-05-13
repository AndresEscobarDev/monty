#include "monty.h"
/**
 * clean_string - Clean the string of spaces and new line.
 * @entrada: String to clean.
 * @len: Len of the string.
 * Return: the new string.
 */
char *clean_string(char *entrada, int len)
{
	char *new = NULL;
	int i = 0, j = 0, k = 0, t = 0;

	while (entrada[i] == ' ' || entrada[i] == '\t')
		i++, k++;
	for (t = 0; entrada[t]; t++)
		if (entrada[t] == '\t')
			entrada[t] = ' ';
	for (t = i; entrada[t]; t++)
		if (entrada[t] == ' ' && entrada[t + 1] == ' ')
			k++;
	while (entrada[i])
	{
		if (entrada[i] == ' ')
		{
			if (entrada[i + 1] == '\n' || entrada[i + 1] == 0)
				break;
			if (entrada[i + 1] == ' ')
			{
				i++;
				continue;
			}
		}
		if (entrada[i] != '\n' && !new)
		{
			new = malloc((len - k) * sizeof(char));
			if (!new)
				return (NULL);
		}
		if (entrada[i] != '\n')
			new[j] = entrada[i], j++, i++;
		else
			i++;
	}
	simple_free(&entrada);
	if (new)
		new[j] = 0;
	return (new);
}
