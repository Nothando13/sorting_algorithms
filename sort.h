#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer sorted in the node
 * @prev: Pointer tp the previous element of the list
 * @next: Pointer to the next element od the list
 */
typedef struct listint_s
{
        const int n;
        struct listint_s *prev;
        struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);

#endif