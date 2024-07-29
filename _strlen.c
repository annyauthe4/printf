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
