#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int digit_counts[10] = {0}; // Initialize counts for each digit to 0

    // Iterate over each character in the string
    for (int i = 0; i < strlen(s); i++) {
        // Check if the character is a digit
        if (s[i] >= '0' && s[i] <= '9') {
            // Increment the count for the corresponding digit
            digit_counts[s[i] - '0']++;
        }
    }

    // Print the counts for each digit
    for (int i = 0; i < 10; i++) {
        printf("%d ", digit_counts[i]);
    }
    printf("\n");

    return 0;
}