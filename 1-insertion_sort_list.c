#include "sort.h"

/**
 * swap_nodes - swap two nodes of a doubly linked list.
 *
 * @a: address of the first node to be swapped.
 * @b: address of the second node to be swapped.
 */

void swap_nodes(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}


/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 *
 * @list: doubly linked list of integers.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *a, *b;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	a = (*list)->next;
	while (a != NULL)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swap_nodes(b->prev, b);
				if (b->prev == NULL)
					*list = b;
				print_list((const listint_t *)*list);
			}
			else
			{
				b = b->prev;
			}
		}
	}
}
