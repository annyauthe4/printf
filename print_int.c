#include "main.h"

/**
  * print_int - Prints integer value
  * @value: The integer passed
  * Return: void
  */
void print_int(int value)
{
	int len;
	char arr[12];

	len = 0;
	if (value == 0)
		arr[len++] = '0';
	if (value < 0)
	{
		write(1, "-", 1);
		value = -value;
	}
	while (value > 0)
	{
		arr[len++] = (value % 10) + '0';
		value /= 10;
	}
	while (len > 0)
	{
		write(1, &arr[--len], 1);
	}
}
