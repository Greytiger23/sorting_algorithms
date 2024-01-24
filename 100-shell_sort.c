#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in
 * ascending order using the Shell sort algorithm, using the Knuth sequence
 * @array: integer
 * @size: list
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
size_t g = 1, a, b;
int t;
if (array == NULL || size < 2)
{
return;
}
while (g < size / 3)
{
g = g * 3 + 1;
}
while (g > 0)
{
for (a = g; a < size; a++)
{
t = array[a];
for (b = a; b >= g && array[b - g] > t; b -= g)
{
array[b] = array[b - g];
}
array[b] = t;
}
print_array(array, size);
g = (g - 1) / 3;
}
}
