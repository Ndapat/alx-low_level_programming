#include <stdio.h>

/**
 * main - Entry point
 * Description: prints lowercase alphabets
 * Return: Always 0
 */

int min(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		if (ch != 'q' && ch != 'e')
			putchar (ch);
	putchar("\n);
	return (0);
}
