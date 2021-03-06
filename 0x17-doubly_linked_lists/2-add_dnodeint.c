#include "lists.h"

/**
 * add_dnodeint - Add node at the beginning
 * @head: first node
 * @n: variable in the node
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  /* 1. Allocate node*/
  dlistint_t *new = malloc(sizeof(dlistint_t));
  /*2. verify space*/
  if (!new)
    return (NULL);
  /* 3. values for the new node*/
  new->n = n;
  /*4. makes previous as NULL*/
  new->prev = NULL;
  /*5. asign the node at the init and the prev is the new node */
  if (!*head)
    new->next = NULL, *head = new;
  else
    new->next = *head,
      (*head)->prev = new, *head = new; /* if there is no more nodes*/

  return (new);
}
