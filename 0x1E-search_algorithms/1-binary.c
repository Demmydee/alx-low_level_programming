#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using the binary search algorithm
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, back, front;

	if (array == NULL)
		return (-1);

	for (back = 0, front = size - 1; front >= back;)
	{
		printf("Searching in array: ");
		for (i = back; i < front; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = back + (front - back) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			front = i - 1;
		else
			back = i + 1;
	}

	return (-1);
}
