#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: It's the stack.
 * @line_number: Line number of file.
 */

void rotl(stack_t **stack, unsigned int line_number)
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
		head->next->prev = NULL;
		*stack = head->next;
		head->next = NULL;
	}
}
