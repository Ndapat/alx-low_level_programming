#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabets in lowercase then uppercase
 * Return: always 0
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
