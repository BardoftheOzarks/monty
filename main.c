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
	stack_t *stack = NULL;
	char buffer[1024], *token = NULL, *token2 = NULL;
	unsigned int line_number = 0, i;

	if (ac != 2)
		error(1, NULL, NULL);
	fptr = fopen(av[1], "r");
	if (fptr == NULL)
		error(2, NULL, av[1]);
	while (fgets(buffer, sizeof(buffer), fptr))
	{
		line_number++;
		for (i = 0; buffer[i] != '\n'; i++)
		{
			if (buffer[i] == ' ')
				continue;
			else
				break;
		}
		if (buffer[i] == '\n')
			continue;
		while (token == NULL)
			token = strtok(buffer, " \n");
		if (strcmp(token, "push") == 0)
		{
			while (token2 == NULL)
				token2 = strtok(NULL, " \n");
			if (cust_isdigit(token2) == 1)
				var = atoi(token2);
			else
				error(3, &line_number, NULL);
		}
		get_func(token, &stack, line_number);
		token = NULL;
		token2 = NULL;
	}
	fclose(fptr);
	free_stack(stack);
	return (0);
}

/**
 * cust_isdigit - Checks if string contains only digits.
 * @str: String to evaluate.
 * Return: 1 if str only contains digits, else 0.
 */

int cust_isdigit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}
