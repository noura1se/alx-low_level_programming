#include "main.h"

/**
  *_islower - checks if the letter is lowercase
  *@c: is the char to check
  *Return: 1 if char is lowercase 0 if not
  */
int _islower(int c)
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
