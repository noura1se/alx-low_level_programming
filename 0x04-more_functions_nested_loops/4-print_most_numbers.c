#include "main.h"

/**
  *print_most_numbers - printing all the numbers exept 2 and 4
  */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		while (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
