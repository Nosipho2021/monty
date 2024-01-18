#include "monty.h"

/**
 * nop - Doesn't do anything.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void nop(stack_t **stack, unsigned int line_number)
{
    /* Avoid unused parameter warnings */
	(void)stack;
	(void)line_number;

    /* nop doesn't do anything */
}

