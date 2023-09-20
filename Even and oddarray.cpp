#include <stdio.h>

int find_index(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;  // Return -1 if the value is not found
}

int main() {
    int array[] = {2, 5, 8, 11, 14, 17, 20};
    int size = sizeof(array) / sizeof(array[0]);
    
    printf("Enter a value to search: ");
    int value;
    scanf("%d", &value);
    
    int index = find_index(array, size, value);
    
    if (index != -1) {
        printf("Value found at index: %d\n", index);
    } else {
        printf("Value not found in the array.\n");
    }

    return 0;
}
