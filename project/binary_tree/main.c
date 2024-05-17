#include "stdio.h"
#include "string.h"

int reslove_function(char* option, char* value) {
    
}

int main(int argc, char **argv) {

    char *option = NULL;
    char *option_value = NULL;

    for(int i = 1; i < argc; i ++) {
        if (strchr(argv[i], '-'))
        {
            option = argv[i];
        } else {
            option_value = argv[i];
        }
    }
    return 0;
}

