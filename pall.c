#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Pointer to the top of the stack.
 */
void f_pall(stack_t *stack)
{
	while (stack)
	{
	printf("%d\n", stack->n);
	stack = stack->next;
	}
}

