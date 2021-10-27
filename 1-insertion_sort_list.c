#include "sort.h"
/**
 * insertion_sort_list - insertion sort in
 * 
 * @list: a pointer to the head of the list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current = NULL, *prev_tmp = NULL, *prev = NULL;

if (!list)
return;

current = *list;
while (current)
{
prev = current->prev;

while (prev)
{
if (current->n >= prev->n)
break;

listint_t *tmp = NULL;

tmp = current->prev;
if (current->next)
current->next->prev = tmp;
if (tmp->prev)
tmp->prev->next = current;
else
*list = current;

current->prev = current->prev->prev;
tmp->next = current->next;
tmp->prev = current;
current->next = tmp;
			
prev_tmp = prev;
prev = current;
current = prev_tmp;
print_list(*list);

prev = prev->prev;
current = current->prev;
}
current = current->next;
}
}
