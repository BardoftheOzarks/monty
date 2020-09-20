#include "monty.h"

/**
 * push - Pushes new element to the stack.
 * @stack: Its the stack.
 * @line_number: Line number of file opcode is found on.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *tail;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (global.mode == 0)
	{
		new->next = *stack;
		new->prev = NULL;
		new->n = global.var;

		if (*stack != NULL)
			(*stack)->prev = new;
		*stack = new;
		return;
	}
	else
	{
		tail = *stack;
		new->next = NULL;
		new->n = global.var;
		if (*stack)
		{
			while (tail->next)
				tail = tail->next;
		}
		else
			*stack = new;
		if (tail)
			tail->next = new;
		new->prev = tail;
	}
}
