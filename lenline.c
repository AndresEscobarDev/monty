#include "monty.h"

/**
 * _getchar - Get the a char input from the standard input
 * Return: Character read on Success, otherwise 0
 */
int lenline(int *_file)
{
	char *c;
	int count = 0;
	int byte_read;

	/*Get the char from de std in and save it in c variable*/
	byte_read = read(*_file, &c, 100);

	printf("BR %d\n", byte_read);
	/*while (byte_read != EOF)
		count++;
*/
	/*If there is no error, return the character read*/
	return (count);
}