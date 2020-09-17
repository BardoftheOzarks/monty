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
	char *token = NULL, *token2, buffer[128];
	int i = 2, line_number = 0;

	if (ac != 2)
		error(1, NULL, NULL);
	fptr = fopen(av[1], "r");
	if (fptr == NULL)
		error(2, NULL, av[1]);
	while (fgets(buffer, sizeof(buffer), fptr))
	{
		line_number++;
		/* feed first word to get_func; Error: unknown instruction: func == NULL */
		while (token == NULL)
			token = strtok(buffer, " ");
		if (token == "push")
		{
			while (token2 == NULL)
				token2 = strtok(NULL, " ");
			if (token2 != NULL)
				var = atoi(token2);
			else
				error(3, &line_number, NULL);
		}
		function = get_func(token);
		if (function == NULL)
			error(4, &line_number, token);
		(*function)(&stack, line_number);
	}
	fclose(fptr);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}
