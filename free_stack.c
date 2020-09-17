#include "monty.h"

/**
 * free_stack - Frees the stack.
 * @stack: Head of stack.
 */

void free_stack(stack_t *stack)
{
	if (!stack)
		return;
	free_stack(stack->next);
	free(stack);
}
