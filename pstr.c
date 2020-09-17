#include "monty.h"
/**
 * pstr - prints ascii values of the stack
 * @stack: it's a stack
 * @line_number: which line of script we're on
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *read;
	int a = line_number;

	if (stack)
	{
		read = *stack;
		a = read->n;
		while (a < 127 && a > 31)
		{
			putchar(a);
			read = read->next;
			a = read->n;
		}
	}
	putchar('\n');
}
