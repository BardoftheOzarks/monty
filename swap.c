#include "monty.h"
/**
 * swap - swaps top two nodes
 * @stack: it's a stack
 * @line_number: which line of script are we on?
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int n;

	if (*stack)
	{
		first = *stack;
		second = first->next;
		if (!second)
		{
			fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
		n = first->n;
		first->n = second->n;
		second->n = n;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}
