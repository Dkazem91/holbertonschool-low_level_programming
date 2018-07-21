# 0x11. C - Singly linked lists

## What you should learn from this project

At the end of this project you are expected to be able to explain to anyone, without the help of Google:

When and why using linked lists vs arrays
How to build and use linked lists

## Exercises:

0. Print list
Write a function that prints all the elements of a list_t list.
Prototype: size_t print_list(const list_t *h);
Return: the number of nodes
Format: see example
If str is NULL, print [0] (nil)
You are allowed to use printf

1. List length
Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);

2. Add node
Write a function that adds a new node at the beginning of a list_t list.
Prototype: list_t *add_node(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

3. Add node at the end
Write a function that adds a new node at the end of a list_t list.
Prototype: list_t *add_node_end(list_t **head, const char *str);
Return: the address of the new element, or NULL if it failed
str needs to be duplicated
You are allowed to use strdup

4. Free list mandatory
Write a function that free a list_t list.
Prototype: void free_list(list_t *head);