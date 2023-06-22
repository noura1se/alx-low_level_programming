#include "main.h"

/**
  *_isdigit - to check if c a digit or not
  *@c: the int to check
  *Return: 1 if c is a digit 0 if not
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
