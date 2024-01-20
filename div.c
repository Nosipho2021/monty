#include "monty.h"

/**
 * f_div - Divides the second top element of the stack by the top element.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	/* Validate the arguments */
	if (!stack || !*stack || !(*stack)->next)
	{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	/* Check for division by zero */
	if ((*stack)->n == 0)
	{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
	}

	/* Divide the second top element by the top element */
	(*stack)->next->n /= (*stack)->n;

	/* Pop the top element */
	pop(stack, line_number);
}

