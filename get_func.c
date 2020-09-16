#include "monty.h"
/**
 * get_func - selects function from string
 * @str: input command
 * Return: function pointer
 */
void (*get_func(char *str))(stack_t **stack, unsigned int line_number)
{
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
	int i;

	for (i = 0; commands[i].opcode; i++)
		if (commands[i].opcode == *str)
			return (commands[i].f);
	return (NULL);
}