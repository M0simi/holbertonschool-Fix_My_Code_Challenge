#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    node = *head;

    /* امشِ حتى توصل لعقدة الفهرس */
    while (node && i < index)
    {
        node = node->next;
        i++;
    }

    if (!node) /* index خارج الحدود */
        return (-1);

    /* فك الروابط من الجهتين */
    if (node->prev)
        node->prev->next = node->next;
    else
        *head = node->next; /* حذفنا أول عنصر: حدّث الرأس */

    if (node->next)
        node->next->prev = node->prev;

    free(node);
    return (1);
}
