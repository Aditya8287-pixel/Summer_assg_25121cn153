// Remove Duplicates Using Auxiliary Array
#include <stdio.h>

int main() {
    int original_arr[] = {10, 20, 20, 30, 40, 40, 50, 60, 10};
    int n = sizeof(original_arr) / sizeof(original_arr[0]);
    int unique_arr[n]; // Auxiliary array to store unique elements
    int unique_count = 0; // Current count of unique elements

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", original_arr[i]);
    }
    printf("\\n");

    // Step 1: Iterate through the original array
    for (int i = 0; i < n; i++) {
        int is_duplicate = 0;
        // Step 2: Check if the current element is already in unique_arr
        for (int j = 0; j < unique_count; j++) {
            if (original_arr[i] == unique_arr[j]) {
                is_duplicate = 1;
                break; // Found a duplicate, no need to check further
            }
        }
        // Step 3: If not a duplicate, add it to unique_arr
        if (!is_duplicate) {
            unique_arr[unique_count] = original_arr[i];
            unique_count++;
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_count; i++) {
        printf("%d ", unique_arr[i]);
    }
    printf("\\n");

    return 0;
}