#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void pop(stack_t **stack, unsigned int line_number)
{
    /* Validate the arguments */
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Remove the top element of the stack */
    stack_t *temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}

