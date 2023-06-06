#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
struct listint_s - singly linked list
@n: integer

@next: points to the next node
*/
typedef struct listint_s
{
struct listint_s *next;
int n;
}listint_t;

size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);
listint_t *add_nodeint(listint_t **head, const int n);

#endif
