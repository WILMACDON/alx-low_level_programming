#include "main.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: void.
 */

int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		f (i % 3 == 0 && i % 5 == 0)
		{
			_putchar("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			_putchar("Fizz");
		}
		else if (i % 5 == 0)
		{
			_putchar("Buzz");
		}
		else
		{
			_putchar("%i", i);
		}

		if (i != 100)
		{
			_putchar(' ');
		}

		i++;
	}
	_putchar('\n');
	return (0);

}
