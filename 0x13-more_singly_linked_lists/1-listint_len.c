#include "lists.h"
/**
 * listsint_len - this function counts the elements in a link of ints list
 * @h: pointer to list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elementNum = 0;

	while (h != NULL)
	{
		h = h->next;
		elementNum++;
	}
	return (elementNum);
}
