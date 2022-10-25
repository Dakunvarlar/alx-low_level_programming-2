#include "lists.h"
/**
 * get_nodeint_at_index - this function gets a nodeat the nth index
 * @head: pointer to list
 * @index: node that we want to get
 * Return: node based on index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
