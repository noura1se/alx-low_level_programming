#include "main.h"

/**
  *print_sign - printing the sign of a number
  *@x: the int to check
  *Return: 1 if positive -1 if negative 0 is null
  */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (x == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (x < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
