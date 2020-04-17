#include "search_algos.h"
/**
 * print_val - print checked values
 * @position: current position in the array
 * @value: value of array
**/
void print_val(int position, int value)
{
	printf("Value checked array[%d] = [%d]\n", position, value);
}
/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: return the first index where value is located
**/
int jump_search(int *array, size_t size, int value)
{
	int jump = 0;
	int i = 0;
	int b = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	while (array[i] < value && i < (int) size)
	{
		b = i;
		i = b + jump;
		if (b < (int) size)
			print_val(b, array[b]);
	}

	if (b >= (int) size && array[size] != value)
		b -= jump;

	printf("Value found between indexes [%d] and [%d]\n", b, b + jump);

	while (array[b] < value)
	{
		if (b >= (int) size)
			break;
		print_val(b, array[b]);
		b += 1;
	}

	if (array[b] == value)
	{
		print_val(b, array[b]);
		return (b);
	}
	return (-1);
}
