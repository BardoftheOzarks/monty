#include "monty.h"

/**
 * stack_mode - Switches mode to stack.
 * @stack: It's the stack.
 * @line_number: Line number of file.
 */

void stack_mode(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	global.mode = 0;
}

/**
 * queue - Switches mode to queue.
 * @stack: It's the stack.
 * @line_number: Line number of file.
 */

void queue(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	global.mode = 1;
}
