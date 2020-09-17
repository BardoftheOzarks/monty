#include "monty.h"
/**
 * pchar - prints ascii value at top of stack
 * @stack: it's a stack
 * @line_number: which line of script we're on
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int a;

	if (!stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	if (a < 127 && a > 31)
	{
		putchar(a);
		putchar('\n');
	}
	else
		fprintf(stderr, "L%d: can't pchar, value out of range\n", (*stack)->n);
}
