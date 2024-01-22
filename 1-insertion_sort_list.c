#include "sort.h"
/**
 * insertion_sort_list - sort doubly linked list with insertion
 * @list: linked list to be sorted
*/
/*void swap(listint_t **t1, listint_t**t2)
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
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *t1, *t2, *tmp;

	t1 = *list;
	t2 = (*list)->next;
	tmp = t2;
	while (t1->next != NULL)
	{
		while (t1->prev != NULL)
		{
			if (t1->n > t1->n)
			{
				swap(&t1, &t2);
				
			}
			else
			{

			}
		}
	}
}