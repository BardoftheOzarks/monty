#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @stack: It's the stack.
 * @line_number: Line number of file.
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *head, *tail;

	if (*stack)
	{
		(void) line_number;
		head = *stack;
		tail = *stack;

		while (tail->next)
			tail = tail->next;

		tail->next = head;
		head->prev = tail;
		tail->prev->next = NULL;
		tail->prev = NULL;
		*stack = tail;
	}
}
