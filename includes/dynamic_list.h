#ifndef DYNAMIC_LIST_H
#define DYNAMIC_LIST_H              
#define DEFAULT_SIZE 10
#define MAX_SIZE 1000

struct dynamic_list;

typedef struct dynamic_list dynamic_list;

dynamic_list* create_dynamic_list(int size);
dynamic_list* create_dynamic_list_with_value(void* value);
int dynamic_list_insert(dynamic_list* dl, void* data);
int dynamic_list_remove_last(dynamic_list* dl);
int dynamic_list_insert_index(dynamic_list* dl, int index, void* data);
int dynamic_list_remove_index(dynamic_list* dl, int index);
int dynamic_list_get(int index);
int dynamic_list_delete(dynamic_list* dl);
int dynamic_list_echo(dynamic_list* dl);
int dynamic_list_is_empty(dynamic_list* dl);

#endif