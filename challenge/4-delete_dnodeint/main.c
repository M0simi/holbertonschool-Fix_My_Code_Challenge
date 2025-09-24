#include "lists.h"

int main(void)
{
	dlistint_t *head = NULL;
	int idx[] = {5, 0, 0, 0, 0, 0, 0, 0}; /* فهارس حذّف تجريبية */
	size_t i;

	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	print_dlistint(head);
	printf("-----------------\n");

	/* جرّب حذوفات متعددة، بينها حذف الرأس عدّة مرات */
	for (i = 0; i < sizeof(idx)/sizeof(idx[0]); i++)
	{
		delete_dnodeint_at_index(&head, idx[i]);
		print_dlistint(head);
		printf("-----------------\n");
	}

	free_dlistint(head);
	return (0);
}
