#include "main.h"

/**
  *_abs - computes the absolute value of an int
  *@n: the int to check
  *Return: the absolute value
  */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
