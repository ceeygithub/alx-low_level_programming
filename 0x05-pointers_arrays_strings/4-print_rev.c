#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int u;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (u = longi; u > 0; u--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
