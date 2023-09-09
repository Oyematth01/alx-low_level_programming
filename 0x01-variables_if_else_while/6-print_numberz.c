#include <stdio.h>

/**
 * main - Prints all single digit numbers f base 10 starting from 0
 * followed by a new line
 * Return: Always o (success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')

	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
