#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
  *main - entry point
  *Disciption: 'check if the number stored in n is positive or negative'
  *Return: always0 
  */ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  {
	    printf ("%d is positive\n", n);
	  }    	
	else if (n < 0)
          {
            printf ("%d is nigative\n", n);
          }     
	  else 
          {
            printf ("%d is zero\n", n);
          }
	return (0);
}

