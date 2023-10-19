
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a nv node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: nv string to add in the node
 *
 * Return: the address of the nv element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
 list_t *nv;
 unsigned int long = 0;

 while (str[long])
 long++;

 nv = malloc(sizeof(list_t));
 if (!nv)
 return (NULL);

 nv->str = strdup(str);
 nv->long = len;
 nv->next = (*head);
 (*head) = nv;

 return (*head);
}

