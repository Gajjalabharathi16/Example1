#include <stdio.h>
#include <string.h>

int main() {
    char arr[] = "embedded"; // Input string
    char result[25];        // Array to store the result
    int len = strlen(arr);
    int k = 0;               // Index for the result array
    int found;

    for (int i = 0; i < len; i++) {
        found = 0;

        // Check if arr[i] is already in result
        for (int j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                found = 1; // Mark as duplicate
                break;
            }
        }

        // If not found, add it to result
        if (!found) {
            result[k++] = arr[i];
        }
    }

    result[k] = '\0'; // Null-terminate the result string

    printf("String after removing duplicates: %s\n", result);

    return 0;
}

