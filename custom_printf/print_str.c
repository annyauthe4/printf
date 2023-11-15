#include "main.h"
#include <string.h>

/**
  * print_str - prints strings
  *@str: pinter to string
  *
  * Return: number of char count
  */
int print_str(char *str)
{
	int i, count;

	count = strlen(str);
	if (str != NULL)
	{
		i = 0;
		while (str[i] < count)
		{
			write(1, str, 1);
			str++;
		}
	}
	else
	{
		str = "(null)";
		count = strlen(str);
		i = 0;
		while (str[i] < count)
		{
			write(1, str, 1);
			str++;
		}
	}
	return (count);
}
