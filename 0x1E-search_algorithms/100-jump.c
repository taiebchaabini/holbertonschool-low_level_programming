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
	size_t jump = 0;
	size_t i = 0;
	size_t b = 0;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i <= size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		for (b = i + jump; b > i; b -= 1)
		{
			if (array[b] == value || b == size)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
				while (i <= b)
				{
					printf("Value checked array[%lu] = [%d]\n", i, array[i]);
					if (b == size)
						return (-1);
					i++;
				}
				return (b);
			}
		}
	}
	return (-1);
}
