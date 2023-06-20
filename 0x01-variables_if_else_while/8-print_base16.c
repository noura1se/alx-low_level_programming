#include<stdio.h>

/**
  *main - the numbers of base 16
  *Return: always 0
  */

int main(void)
{
	int i;
	char x;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
