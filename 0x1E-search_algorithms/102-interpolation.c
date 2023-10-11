#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using the interpolation search algorithm
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1 if the value is not present or the array is NULL
  *         Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, back, front;

	if (array == NULL)
		return (-1);

	for (back = 0, front = size - 1; front >= back;)
	{
		i = back + (((double)(front - back) / (array[front] -
					array[back])) * (value - array[back]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			front = i - 1;
		else
			back = i + 1;
	}

	return (-1);
}
