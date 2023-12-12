#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Functions */

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int linear_search_sub(int *array, size_t low, size_t high, int value);

#endif
