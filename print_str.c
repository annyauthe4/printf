#include "main.h"

/**
  * print_str - prints strings
  *@str: pointer to string
  *
  * Return: number of char count
  */
int print_str(const char *format)
{
	int i, count;
	char *arr;

	count = _strlen(format);
	if (format == NULL)
		return (-1);
	arr = malloc(sizeof(char) * (count + 1));
	if (arr == NULL)
		return (-1);
	for (i = 0; i < count; i++)
	{
		arr[i] = format[i];
	}
	arr[count] = '\0';

	write(1, arr, count);
	free(arr);
	return (count);
}
