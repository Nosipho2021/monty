#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	/* Validate the arguments */
	if (!stack || !*stack)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}

	/* Print the value at the top of the stack */
	printf("%d\n", (*stack)->n);
}

