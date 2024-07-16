#include <stdlib.h>

int main() {
    int * pointer = malloc(sizeof(int)); 
    while (*pointer == 0){
        free(pointer);
        pointer = malloc(sizeof(int));
    }
    return 0; 
}