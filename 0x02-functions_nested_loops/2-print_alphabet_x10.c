#include "main.h"

/**
  *print_alphabet_x10 - printing the alphabets 1o times
  *Return: always 0
  */

void print_alphabet_x10(void)
{
	char i;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
