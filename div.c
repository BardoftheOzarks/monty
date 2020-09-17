#include "monty.h"
/**
 * div - divides second node by top node
 * @stack: it's a stack
 * @line_number: which line of script are we on?
 */
void div(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int a, b;

	if (stack)
	{
		first = *stack;
		second = first->next;
		if (!second)
		{
			fprintf(stderr, "L%d: can't div, stack too short", line_number);
			exit(EXIT_FAILURE);
		}
		a = first->n;
		b = second->n;
		second->n = b / a;
		free(first);
		*stack = second;
	}
}
