#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <sys/types.h>

/*
 * file: sort.h
 * author: 0xTariq-dev, Ehab Elsayed
 * describtion: Header file contains declarations for functions
 *		used in the Sorting Algorithms project.
 */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Functions Prototypes */

/* Printing Functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* Sorting Algorithms Prototypes */
void bubble_sort(int *array, size_t size);
void swap(int *x, int *y);
void insertion_sort_list(listint_t **list);
void node_swap(listint_t **l, listint_t *n1, listint_t *n2);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lumoto_part(int *arr, int lo, int hi, size_t size);
void Qsort(int *arr, int lo, int hi, size_t size);
void cocktail_sort_list(listint_t **list);

#endif
