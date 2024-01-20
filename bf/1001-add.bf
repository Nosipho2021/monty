#include <stdio.h>

int main(void)
{
	int digit1, digit2;

	/* Read two digits from the user*/
	printf("Enter the first digit: ");
	scanf("%1d", &digit1);

	printf("Enter the second digit: ");
	scanf("%1d", &digit2);

	/* Add the two digits*/
	int total = digit1 + digit2;

	/* Ensure the total is one digit long (<10)*/
	if (total >= 10)
	{
	total %= 10;
	}

	/* Print the result*/
	printf("The sum of %d and %d is: %d\n", digit1, digit2, total);

	return (0);
}

