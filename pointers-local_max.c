#include <stdio.h>

int main() {
    int arr[] = {1, 3, 7, 6, 2, 8, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Pointer to 2 element to get prev and next element
    int *p = &arr[1];

    for(int i = 1; i < size-1; i++, p++) {
        if(*p > *(p-1) && *p > *(p+1)) {
            printf("local max: %d, by index [%d]\n", *p, i);
        }
    }
}
