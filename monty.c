#include "monty.h"

int main(int argc, char *argv[])
{
	int _file;
	ssize_t _read;
	char buffer[50];
	int i;

	if (argc != 2)
	{	/*PrintError*/
		fprintf(stderr,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	_file = open(argv[1], O_RDONLY);
	if (_file == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	_read = read(_file, buffer, 50);
	printf("READ %lu\n", _read);
	for (i = 0; buffer[i]; i++)
		printf("%c", buffer[i]);

	printf("%d\n", lenline(&_file));
	return 0;
}
