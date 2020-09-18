#include "monty.h"

/**
 * push - Pushes new element to the stack.
 * @stack: Its the stack.
 * @line_number: Line number of file opcode is found on.
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->next = *stack;
	new->prev = NULL;
	new->n = var;

    if (*stack != NULL)
	    (*stack)->prev = new;
	*stack = new;
}
