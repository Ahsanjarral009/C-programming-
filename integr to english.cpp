#include <stdio.h>

void displayEnglishName(int number) {
    const char* names[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    if (number < 0 || number > 999) {
        printf("Invalid input: Please enter a number between 0 and 999.\n");
        return;
    }

    if (number >= 100) {
        printf("%s hundred", names[number / 100]);
        number %= 100;
        if (number > 0) {
            printf(" and ");
        }
    }

    if (number >= 20) {
        const char* tens[] = {
            "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
        };
        printf("%s", tens[number / 10]);
        number %= 10;
        if (number > 0) {
            printf("-%s", names[number]);
        }
    } else if (number >= 10) {
        const char* teens[] = {
            "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
            "seventeen", "eighteen", "nineteen"
        };
        printf("%s", teens[number - 10]);
    } else if (number > 0) {
        printf("%s", names[number]);
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter an integer between 0 and 999: ");
    scanf("%d", &number);

    displayEnglishName(number);

    return 0;
}
