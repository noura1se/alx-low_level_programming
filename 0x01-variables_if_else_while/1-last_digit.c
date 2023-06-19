#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
  *main - is the last dijit less than 6 or greater than 5
  *Return: always 0
  */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("last dijit of %d is %d and is greater than 5\n", n, x);
	}
	else if ((x < 6) && (x != 0))
	{
		printf("last dijit of %d is %d and is less than 6 and not 0\n", n, x);
	}
	else
	{
		printf("last dijit of %d is %d and is 0\n", n, x);
	}
	return (0);
}
