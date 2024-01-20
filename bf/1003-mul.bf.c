#include <stdio.h>

int main(void)
{
	int digit1, digit2;

	/* Read two digits from the user*/
	printf("Enter the first digit: ");
	scanf("%1d", &digit1);

	printf("Enter the second digit: ");
	scanf("%1d", &digit2);

	/* Multiply the two digits*/
	int result = digit1 * digit2;

	/* Print the result followed by a new line*/
	printf("The product of %d and %d is: %d\n", digit1, digit2, result);

	return (0);
}

