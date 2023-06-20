#include<stdio.h>

/**
  *main - printing different combinations of three digits
  *Return: always 0
  */

int main(void)
{
	int i, x, n;

	for (i = 48; i < 58; i++)
	{
		for (x = 49; x < 58; x++)
		{
			for (n = 50; n < 58; n++)
			{
				if (n > x && x > i)
				{
					putchar(i);
					putchar(x);
					putchar(n);
					if (i != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
