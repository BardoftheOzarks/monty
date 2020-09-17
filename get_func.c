#include "monty.h"
/**
 * get_func - selects function from string
 * @str: input command
 * Return: function pointer
 */
void *get_func(char *str)
{
	instruction_t commands[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"mul", mul},
		{"sub", sub},
		{"div", div},
		{"mod", mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; (&commands[i])->opcode; i++)
		if (strncmp((&commands[i])->opcode, str, 3) == 0)
			return (commands[i].f);
	return (NULL);
}
