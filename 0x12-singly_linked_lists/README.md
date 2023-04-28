ALX project by AUSTINE ABINE.
0x12. C - Singly linked lists
# Linked List Library

This library provides a simple implementation of a singly linked list in C, with functions to print, add, and free nodes. The `list_t` struct contains a string field `str`, a length field `len`, and a pointer to the next node `next`.

## Function Documentation

- `size_t print_list(const list_t *h)`: Prints all the strings stored in the linked list starting from the given head node `h`, and returns the number of nodes printed.

- `size_t list_len(const list_t *h)`: Counts the number of nodes in the linked list starting from the given head node `h`, and returns the count.

- `list_t *add_node(list_t **head, const char *str)`: Creates a new node with the given string `str`, adds it to the beginning of the linked list starting from the given head node `*head`, and returns a pointer to the new node.

- `list_t *add_node_end(list_t **head, const char *str)`: Creates a new node with the given string `str`, adds it to the end of the linked list starting from the given head node `*head`, and returns a pointer to the new node.

- `void free_list(list_t *head)`: Frees all the nodes in the linked list starting from the given head node `head`.

## Usage

To use this library, include the `lists.h` header file in your C code:

#include "lists.h"

Then, you can create a linked list and add nodes to it using the provided functions. For example:

list_t *new_node = NULL;
add_node(&new_node, "hello");
add_node(&new_node, "world");
print_list(new_node);
free_list(new_node);

This would create a linked list with two nodes containing the strings "hello" and "world", print the strings using `print_list()`, and then free the nodes using `free_list()`.