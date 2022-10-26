#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 *  Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *prev;

	p2 = head;
	prev = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next != head && p2->next != prev)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
