#include <stdio.h>

int main() {
    int n;
    printf("How many rows do you want in your pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int j = 1; j <= i - 1; j++) {
            printf("%d", j);
        }
       for (int k=i ; k >=1 ; k--){
	   printf("%d",k);
	   }
        printf("\n");
    }

    return 0;
}
