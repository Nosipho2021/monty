#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
    /* Validate the arguments */
    if (!stack || !*stack || !(*stack)->next)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Subtract the top element from the second top element */
    (*stack)->next->n -= (*stack)->n;

    /* Pop the top element */
    pop(stack, line_number);
}

