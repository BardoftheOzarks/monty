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
		{"div", divide},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{NULL, NULL}
	};
	int i;
	void (*func)(stack_t **stack, unsigned int line_number);

	for (i = 0; (&commands[i])->opcode; i++)
		if (strncmp((&commands[i])->opcode, str, 3) == 0)
		{
			func = commands[i].f;
			return (func);
		}
	return (NULL);
}
