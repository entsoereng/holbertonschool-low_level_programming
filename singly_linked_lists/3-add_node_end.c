#include "lists.h"
/**
 * add_node_end - adds a node to the end of a list
 * @head: head of the linked list
 * @str: string to store in list
 * Return: address of end node
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode, *temp;
size_t character;

newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);

for (character = 0; str[character]; character++)
;
newnode->len = character;
newnode->next = NULL;
temp = *head;

if (temp == NULL)
*head = newnode;
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newnode;
}
return (*head);
}
