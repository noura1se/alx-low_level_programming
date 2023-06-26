#include "main.h"

/**
  *swap_int - swaping the value of two integers
  *@a: the first int to swap
  *@b: the second int to swap
  */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
