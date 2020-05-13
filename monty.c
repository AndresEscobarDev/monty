#include "monty.h"

data_t data;
/**
 * main - su madre
 * @argc: no la tuya
 * @argv: perro hpta
 * Return: always su madre
 */
int main(int argc, char *argv[])
{
	FILE *_file;
	ssize_t _read;
	size_t len = 0;
	char *line = NULL;
	stack_t *top = NULL;
	int lineNumber = 1;

	data.status = 0;
	data.arguments = NULL;

	/* Check if argc is != 2*/
	check_argv(&argc);

	/*Funcion que Abre el archivo*/
	_file = fopen(argv[1], "r");
	if (!_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	/*Funcion que lee el archivo*/
	while (((_read = getline(&line, &len, _file)) != EOF) && data.status == 0)
	{
		line = clean_string(line, _read);
		data.arguments = split_string(line, ' ');
		simple_free(&line);
		exec_commands(lineNumber)(&top, lineNumber);
		free_argument(data.arguments);
		lineNumber++;
	}
	simple_free(&line);
	free_dlistint(top);
	fclose(_file);

	if (data.status == EXIT_FAILURE)
		exit(EXIT_FAILURE);

	return (EXIT_SUCCESS);
}
