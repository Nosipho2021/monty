#include "monty.h"

/**
 * mod - Computes the rest of the division of the second top element by the top.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void mod(stack_t **stack, unsigned int line_number)
{
    /* Validate the arguments */
    if (!stack || !*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Check for division by zero */
    if ((*stack)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Compute the rest of the division */
    (*stack)->next->n %= (*stack)->n;

    /* Pop the top element */
    pop(stack, line_number);
}

