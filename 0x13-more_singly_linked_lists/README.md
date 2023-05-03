Austine Abine 

# Singly Linked Lists in C

This repository contains an implementation of singly linked lists in C. The implementation includes functions to create, print, manipulate, and free singly linked lists.

## Functions

The following functions are included:

* `size_t print_listint(const listint_t *h)`: prints all the elements of a singly linked list of integers.
* `size_t listint_len(const listint_t *h)`: returns the number of elements in a singly linked list of integers.
* `listint_t *add_nodeint(listint_t **head, const int n)`: adds a new node at the beginning of a singly linked list of integers.
* `listint_t *add_nodeint_end(listint_t **head, const int n)`: adds a new node at the end of a singly linked list of integers.
* `void free_listint(listint_t *head)`: frees a singly linked list of integers.
* `void free_listint2(listint_t **head)`: frees a singly linked list of integers and sets the head to NULL.
* `int pop_listint(listint_t **head)`: deletes the head node of a singly linked list of integers, and returns the head node's data.
* `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`: returns the nth node of a singly linked list of integers.
* `int sum_listint(listint_t *head)`: returns the sum of all the data in a singly linked list of integers.
* `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`: inserts a new node at a given position in a singly linked list of integers.
* `int delete_nodeint_at_index(listint_t **head, unsigned int index)`: deletes the node at a given position in a singly linked list of integers.

## Usage

To use the functions in this implementation, simply include the `main.h` header file and compile your code with the implementation files.
