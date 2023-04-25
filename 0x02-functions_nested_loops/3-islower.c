#include "main.h"
/**
*_islower - checks for lowercase character
* Description: checks is a character is lowercase
* @c: the cahracter in the ascii table
*Return: 1 for  lowercase,0 otherwise.
*/
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
