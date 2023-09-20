#include <stdio.h>

int main() { 
    int arr[5] = {49, 36, 24, 15, 9};
    int n = 5;
    printf("Values before sorting:\n");
    
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
puts("");
    for(int i = 0 ; i <= n; i++ ){
    	
    	printf("arr[%d] : %d\n",i,arr[i]);
	}

    int temp = 0;

    for (int i = 0; i < n-1 ; i++) {
        for (int j = 0; j < n-1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nValues after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    return 0;
}
