#include "main.h"
/**
*print_alpabet -  prints the alphabet, in lowercase, followed by a new line.
*Return: alaways 0.
*/
void print_alpabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
