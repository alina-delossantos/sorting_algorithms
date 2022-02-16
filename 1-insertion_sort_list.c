#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending ord
 * @list: pointer to head
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *prev;

	if (!list || !(*list) || !(*list)->next)
		return;

	aux = *list;
	while (aux)
	{
		prev = aux;
		while (prev->prev && prev->n < prev->prev->n)
		{
			prev->prev->next = prev->next;
			if (prev->next)
			{
				prev->next->prev = prev->prev;
			}
			prev->next = prev->prev;
			prev->prev = prev->prev->prev;
			prev->next->prev = prev;
			if (!prev->prev)
				*list = prev;
			else
				prev->prev->next = prev;
			print_list(*list);
		}
		aux = aux->next;
	}
}
