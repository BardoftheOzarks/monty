#include "monty.h"
/**
 * add - adds top two nodes
 * @stack: it's a stack
 * @line_number: which line of script are we on?
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int a, b;

	if (*stack)
	{
		first = *stack;
		second = first->next;
		if (!second)
		{
			fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
		a = first->n;
		b = second->n;
		second->n = a + b;
		free(first);
		*stack = second;
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
