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

	if (str == NULL)
	{
		str = "(null)";
	}

	count = strlen(str);
	i = 0;
	while (i < count)
	{
		write(1, str + i, 1);
		i++;
	}
	return (count);
}
