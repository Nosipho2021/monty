void free_stack(stack_t *stack) {
    while (stack) {
        stack_t *temp = stack;
        stack = stack->next;
        free(temp);
    }
}


