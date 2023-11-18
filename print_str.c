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
	}
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
			count++;
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
