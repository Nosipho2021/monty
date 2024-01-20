#include "monty.h"

/**
 * stack - Sets the format of the data to a stack (LIFO).
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_stack(stack_t **stack, unsigned int line_number)
{
	/* Avoid unused parameter warnings */
	(void)stack;
	(void)line_number;

	/* The program is already in stack mode (LIFO), do nothing */
}

/**
 * f_queue - Sets the format of the data to a queue (FIFO).
 * @stack: Pointer to the top of the stack.
 * @line_number: Line number in the Monty file where the opcode appears.
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *last;

	/* Avoid unused parameter warnings */
	(void)line_number;

	/* Check if the stack is empty or has only one element */
	if (!stack || !(*stack) || !(*stack)->next)
	return;

	/* Traverse the stack to find the last element */
	current = *stack;
	last = current;

	while (current->next)
	current = current->next;

	/* Move the top element to the end of the stack */
	last->next = *stack;
	*stack = (*stack)->next;
	last->next->next = NULL;
}

