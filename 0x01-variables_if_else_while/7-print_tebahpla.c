#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in the reverse order
 * followed by a new line
 * Return: Always o (SUccess)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
