#include "monty.h"
/**
 * pint - prints value at top of stack
 * @stack: it's a stack
 * @line_number: which line of script we're on
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
