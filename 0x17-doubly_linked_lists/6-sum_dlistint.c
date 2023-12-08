#include "lists.h"

/**
 * sum_dlistint - returns the total of  all summmed data (n) of a doubly linked list
 * @head: pointer to the first node of the list
 * Return: returns the added data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
