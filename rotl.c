#include "monty.h"

/**
 * rotl - Rotates the stack to the top.
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void rotl(stack_t **stack, unsigned int line_number)
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

	/* Move the top element to the end of the stack */
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	last->next = temp;
}

