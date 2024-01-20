// Inside the while loop
char *opcode, *arg;
opcode = strtok(line, " \t\n");
if (opcode && strcmp(opcode, "push") == 0) {
    arg = strtok(NULL, " \t\n");
    if (!arg || !is_numeric(arg)) {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        free(line);
        free_stack(stack);
        fclose(file);
        exit(EXIT_FAILURE);
    }
    push(&stack, atoi(arg));
} else if (/* Check for other instructions */) {
    // Execute other instructions
} else {
    fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
    free(line);
    free_stack(stack);
    fclose(file);
    exit(EXIT_FAILURE);
}

