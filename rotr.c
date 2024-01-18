#include "monty.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    /* Avoid unused parameter warnings */
    (void)line_number;

    /* Check if the stack is empty or has only one element */
    if (!stack || !(*stack) || !(*stack)->next)
        return;

    /* Save the last element of the stack */
    last = *stack;

    /* Traverse the stack to find the last element */
    while (last->next)
        last = last->next;

    /* Move the last element to the top of the stack */
    temp = last;
    last = *stack;
    while (last->next->next)
        last = last->next;

    last->next = NULL;
    temp->next = *stack;
    *stack = temp;
}

