#include "main.h"

/**
  * print_str - prints strings
  *@str: pointer to string
  *
  * Return: number of char count
  */
int print_str(const char *str)
{
	int i, count;

	if (str == NULL)
	{
		str = "(null)";
		count = strlen(str);
		i = 0;
		while (i < count)
		{
			write(1, str, 1);
			i++;
		}
		return (count);
	}
	else
	{
		count = strlen(str);
		i = 0;
		while (i < count)
		{
			write(1, str, 1);
			i++;
		}
		return (count);
	}
}
