#include "lists.h"
/**
 * add_node - adds a node to the beginning of a list
 * @head: head of the linked list
 * @str: string to store in list
 * Return: address of head node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t character;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);

for (character = 0; str[character]; character++)
;
new->len = character;
new->next = *head;
*head = new;

return (*head);
}
