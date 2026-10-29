#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int row;
	int spaces;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (spaces = 0; spaces < size - row - 1; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes < row + 1; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
