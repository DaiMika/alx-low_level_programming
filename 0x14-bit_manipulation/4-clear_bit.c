#include "main.h"

/**
 * clear_bit - To set value of a bit at a given index to 0.
 * @n: Pointer to the bit.
 * @index: The index to set value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
