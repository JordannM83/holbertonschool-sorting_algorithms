#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm
 * @list: Double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;


	while (current)
	{
		temp = current->next;

		while (current->prev && current->prev->n > current->n)
		{
			listint_t *prev_node = current->prev;

			if (prev_node->prev)
				prev_node->prev->next = current;
			else
				*list = current;

			if (current->next)
				current->next->prev = prev_node;

			current->prev = prev_node->prev;
			prev_node->next = current->next;
			current->next = prev_node;
			prev_node->prev = current;
			print_list(*list);
		}

		current = temp;
	}
}
