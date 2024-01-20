#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @stack: pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	/* Validate the arguments */
	if (!stack || !*stack || !(*stack)->next)
	{
	fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	/* Add the top two elements of the stack */
	(*stack)->next->n += (*stack)->n;

	/* Pop the top element */
	pop(stack, line_number);
}

