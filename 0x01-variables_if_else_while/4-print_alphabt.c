#include<stdio.h>

/**
  *main - printing the alphabets exept q and e
  *Return: always 0
  */

int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
		cha++;
	}
	putchar('\n');
	return (0);
}
