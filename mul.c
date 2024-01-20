#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the stack with the top element.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_mul(stack_t **stack, unsigned int line_number)
{
	/* Validate the arguments */
	if (!stack || !*stack || !(*stack)->next)
	{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

	/* Multiply the second top element by the top element */
	(*stack)->next->n *= (*stack)->n;

	/* Pop the top element */
	pop(stack, line_number);
}

