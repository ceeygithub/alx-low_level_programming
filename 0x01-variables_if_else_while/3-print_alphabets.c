#include <stdio.h>

/**
 * main - Prints the alphabet,both upper and lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}
