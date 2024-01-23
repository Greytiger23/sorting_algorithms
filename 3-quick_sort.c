#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: integer
 * @size: list
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
recur(array, size, 0, size - 1);
}
/
