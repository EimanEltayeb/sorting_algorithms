#include "sort.h"
/**
 * swap - swaps two nodes
 * @t1: first node
 * @t2: second node
*/
void swap(listint_t **t1, listint_t **t2)
{
	listint_t *s1 = *t1, *s2 = *t2;

	if (s1->prev != NULL)
		s1->prev->next = s2;
	if (s2->next != NULL)
		s2->next->prev = s1;
	s1->next = s2->next;
	s2->next = s1;
	s2->prev = s1->prev;
	s1->prev = s2;
}
/**
 * insertion_sort_list - sort doubly linked list with insertion
 * @list: linked list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *t1, *t2, *tmp;
	int a = 1;

	if (*list != NULL && (*list)->next != NULL)
	{
		t1 = *list;
		t2 = (*list)->next;
		tmp = t2->next;
		while (t2)
		{
			while (t1)
			{
				if (t1->n > t2->n)
				{
					swap(&t1, &t2);
					t1 = t2->prev;
					if (t1 == NULL)
						*list = t2;
					print_list(*list);
					continue;
				}
				else
					break;
			}
			if (a == 1)
			{
			t2 = tmp;
			if (t2 == NULL && t1 == NULL)
				break;
			if (t2 != NULL)
				t1 = t2->prev;
			if (t2->next != NULL)
				tmp = t2->next;
			else
				a = 0;
			}
			else
				break;
		}
	}
}
