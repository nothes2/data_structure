#include "stdlib.h"
#include "stdio.h"
#include "string.h"

#include "color.h"
#include "dynamic_list.h"

void error_check(int, void*);

struct dynamic_list
{
    int size;
    void **array;
};

dynamic_list *create_dynamic_list(int size)
{
    void *array = (void *)malloc(size);

    error_check(size, array);

    dynamic_list *dyn_list = (dynamic_list *)malloc(2 * sizeof(dynamic_list *));
    dyn_list->size = size;
    dyn_list->array = array;
    return dyn_list;
}

dynamic_list *create_dynamic_list_with_value(void *value)
{
    size_t array_size = sizeof(value) / sizeof(value[0]);
    dynamic_list *dyn_list = (dynamic_list *)malloc(2 * sizeof(array_size));

    memcpy(dyn_list->array, value, array_size);
    dyn_list->size = array_size * 2;

    return dyn_list;
}

/// This function for error check like size out of bounds and array allocation.
/// @param size check if the size out of bound.
/// @param array check the if the array allocate successfully.
/// @return no return
void error_check(int size, void *array)
{
    if (size > MAX_SIZE)
    {
        fprintf(stderr, BOLD RED "[ERROR]: SIZE TOO LARGE! \n" RESET);
        exit(-1);
    }

    if (array == NULL) 
    {
        fprintf(stderr, BOLD RED "[ERROR]: MEMORY ALLOCATION FAILED! \n" RESET);
        exit(-1);
    }
}