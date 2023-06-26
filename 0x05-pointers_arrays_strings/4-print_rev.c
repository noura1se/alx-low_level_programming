#include "main.h"

/**
  *print_rev - printing a string in reverse
  *@s: the string to print
  */

void print_rev(char *s)
{
	int cpt = 0;
	int i;

	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	s--;
	for (i = cpt; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
