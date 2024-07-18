#include "stdio.h"
#include "dynamic_list.h"

    int main()
    {
        char* arr = "hello world";
        dynamic_list* dy_list = create_dynamic_list_with_value(arr);
        
        if(dy_list == NULL) {
            return -1;
        }

        for (int i = 0; i < dy_list -> size; i++)
        {
            printf("%s", dy_list->array[i]);
        }

        
        return 0;
    }       