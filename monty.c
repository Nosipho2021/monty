#include "monty.h"

/**
 * is_comment -  Add a helper function to check if a line is a comment
 * is_comment: add a helper function to check line in comment
 */

int is_comment(char *line)
{
	while (*line == ' ' || *line == '\t')
	{
	line++;
	}
	return (*line == '#');
}

/**
 * tokenize_line - Tokenizes a line into opcode and argument.
 * @line: The line to be tokenized.
 * @opcode: Pointer to store the opcode.
 * @arg: Pointer to store the argument.
 */
void tokenize_line(char *line, char **opcode, char **arg)
{

	if (is_comment(line))
	{
	*opcode = NULL;
	*arg = NULL;
	return;
	}


}

