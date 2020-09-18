#include "monty.h"

/**
 * error - Handles error statement printing to stderr.
 * @errno: Type of error.
 * @line_number: Line number of file if applicable.
 * @str: String to be passed into function such as filename.
 */

void error(int errno, unsigned int *line_number, char *str)
{
	if (str == NULL)
		(void) str;
	if (line_number == NULL)
		(void) line_number;

	switch (errno)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);

		case 2:
			fprintf(stderr, "Error: Can't open file %s\n", str);
			exit(EXIT_FAILURE);

		case 3:
			fprintf(stderr, "L%d: usage: push integer\n", *line_number);
			exit(EXIT_FAILURE);

		case 4:
			fprintf(stderr, "L%d: unknown instruction %s\n", *line_number, str);
			exit(EXIT_FAILURE);
	}
}
