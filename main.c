#include "monty.h"

/**
 * main - It's...a monty file interpreter
 * @ac: argument count
 * @av: argument vector
 * Return: probably something ridiculous
 */

int main(int ac, char **av)
{
	FILE *fptr;
	stack_t *stack;
	void (*function)(stack_t **stack, int line_number);
	char buffer[128], *token = NULL, *token2 = NULL;
	int line_number = 0;

	if (ac != 2)
	{	fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);	}
	fptr = fopen(av[1], "r");
	if (fptr == NULL)
	{	fprintf(stderr, "Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);	}
	while (fgets(buffer, sizeof(buffer), fptr))
	{	line_number++;
		while (token == NULL)
			token = strtok(buffer, " ");
		if (strcmp(token, "push") == 0)
		{
			while (token2 == NULL)
				token2 = strtok(NULL, " ");
			if (token2 != NULL)
				var = atoi(token2);
			else
			{	fprintf(stderr, "L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);	}}
		function = get_func(token);
		if (function == NULL)
		{	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
			exit(EXIT_FAILURE);	}
		(*function)(&stack, line_number);
		token = NULL;
		token2 = NULL;	}

	fclose(fptr);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}
