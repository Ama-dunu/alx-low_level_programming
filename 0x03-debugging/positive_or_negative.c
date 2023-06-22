#include "main.h"

/**
 * main - Determine if a number is positive, negative or zero,
 * positive_or_negative - Determines if a number is positive or negative
 * @i: The number to be checked
 * 0 : is the number to be checked
 * Return: 0 on success
 */

void positive_or_negative(int i)

{

	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return;

}
