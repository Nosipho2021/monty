#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_pchar(stack_t **stack, unsigned int line_number)
{
    /* Validate the arguments */
    if (!stack || !*stack)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Check if the value is in the ASCII table range */
    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Print the character at the top of the stack */
    putchar((*stack)->n);
    putchar('\n');
}

