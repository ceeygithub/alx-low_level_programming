#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *Followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (n = 97; n < 103; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
