#include<stdio.h>

/**
  *main - printing fifferent combinations
  *Return: always 0
  */

int main(void)
{
	int i, x;

	for (i = 48; i <= 56; i++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > i)
			{
				putchar(i);
				putchar(x);
				if (i != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
