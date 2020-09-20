#include "monty.h"
/**
 * pall - prints all values in stack
 * @stack: exactly what it sounds like
 * @line_number: line number from file read
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *flesh_wound = *stack;
	(void) line_number;

	if (!flesh_wound)
		return;

	while (flesh_wound)
	{
		printf("%d\n", flesh_wound->n);
		flesh_wound = flesh_wound->next;
	}
}
