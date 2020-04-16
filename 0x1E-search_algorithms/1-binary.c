#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: return the index where value is located
**/
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int left = 0;
	int right = 0;
	int mid = 0;

	if (array == NULL || size == 0)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
		
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
