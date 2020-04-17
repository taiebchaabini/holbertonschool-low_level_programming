#include "search_algos.h"
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
	for (i = 0; i < (int) size; i += jump)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i + jump] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
					i, i + jump);
			break;
		}
	}

	for (b = i; b < i + jump; b++)
	{
		if (b > (int) size)
		{
			b -= jump;
			printf("Value found between indexes [%d] and [%d]\n",
					b, b + jump);
		}
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		if (array[b] == value)
			return (b);
		if (array[size] < value && array[b + 1] == array[size])
			return (-1);
	}
	return (b);
}
