#ifndef _SEARCH_ALGS_H_
#define _SEARCH_ALGS_H_

#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGS_H_ */
