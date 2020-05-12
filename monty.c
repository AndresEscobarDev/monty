#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *_file;
	ssize_t _read;
	size_t len = 0;
	char *line = NULL;

	if (argc != 2)
	{	/*PrintError*/
		fprintf(stderr,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	_file = fopen(argv[1], "r");
	if (!_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((_read = getline(&line, &len, _file)) != EOF)
	{
		printf("%s", line);
	}

	return 0;
}
