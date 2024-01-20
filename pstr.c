#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    /* Avoid unused parameter warnings */
    (void)line_number;

    /* Traverse the stack and print characters until a condition is met */
    while (current && current->n != 0 && (current->n > 0 && current->n <= 127))
    {
        putchar(current->n);
        current = current->next;
    }

    /* Print a new line at the end */
    putchar('\n');
}

