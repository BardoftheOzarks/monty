#include "monty.h"
/**
 * swap - swaps top two nodes
 * @stack: it's a stack
 * @line_number: which line of script are we on?
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if (stack)
	{
		first = *stack;
		second = first->next;
		if (!second)
		{
			fprintf(stderr, "L%d: can't swap, stack too short", line_number);
			exit(EXIT_FAILURE);
		}
		first->prev = second;
		first->next = second->next;
		second->next = first;
		second->prev = NULL;
		*stack = second;
		first = first->next;
		second = second->next;
		first->prev = second;
	}
}
