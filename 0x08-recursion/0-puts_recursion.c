#include "main.h"
/**
 * _puts_recursion-function that prints a string
 * @s: the string to print
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		_putchar_recursion(s+1);
	}

	else
		_putchar('\n');
}
