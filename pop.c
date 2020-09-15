#include "monty.h"
/**
 * pop - pops the top off stack
 * @stack: really?
 * @line_number: which line of script we're on
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *Brian = *stack;

	if (!stack)
	{
		perror("L%d: can't pop an empty stack\n", line_number);
		exit (EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	free(Brian);
}
