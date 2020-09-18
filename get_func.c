#include "monty.h"
/**
 * get_func - selects function from string
 * @str: Input command
 * @stack: It's the stack.
 * @line_number: Line number of file.
 * Return: function pointer
 */

int get_func(char *str, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t commands[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	for (i = 0; commands[i].opcode; i++)
		if (strcmp(commands[i].opcode, str) == 0)
			commands[i].f(stack, line_number);
	return (0);
}
