#include "monty.h"
/**
 * mod - modulos second node by first
 * @stack: it's a stack
 * @line_number: which line of script are we on?
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;
	int a, b;

	if (*stack)
	{
		first = *stack;
		second = first->next;
		if (!second)
		{
			fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
			exit(EXIT_FAILURE);
		}
		if (first->n == 0)
		{
			fprintf(stderr, "L%d: division by zero\n", line_number);
			exit(EXIT_FAILURE);
		}
		a = first->n;
		b = second->n;
		second->n = b % a;
		free(first);
		*stack = second;
	}
	else
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
			exit(EXIT_FAILURE);
	}
}
