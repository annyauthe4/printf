#include "main.h"

/**
  * _strlen - Count the lenght of a string
  * @format: Pointer to a string
  * Return: number of string
  */
int _strlen(const char *format)
{
	int count;

	count = 0;
	if (format == NULL)
		return (count);
	while (format[count] != '\0')
	{
		count++;
	}
	return (count);
}

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

/**
  * print_ch - prints character
  * @ch: character to print
  *
  * Return: number of char to print
  */
int print_ch(int ch)
{
	write(1, &ch, 1);
	return (1);
}
