#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Descriptiom: Get a random number and print the number 
 * and if it's positive, negative or zero
 * Return o
 */
int manin(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%i is negative#n", n);
return (0);
}
