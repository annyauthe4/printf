#include "main.h"

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
