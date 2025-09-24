#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	if (!head)
		return NULL;

	new = malloc(sizeof(*new));
	if (!new)
		return NULL;

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return new;
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;

	tail->next = new;
	new->prev = tail;

	return new;
}
