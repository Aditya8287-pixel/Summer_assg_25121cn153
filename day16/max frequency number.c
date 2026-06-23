#include <stdio.h>

int main() {

    int n, i, j, count, maxCount = 0, mostFrequent;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {

        count = 1;

        for(j = i + 1; j < n; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }

        }

        if(count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }

    }

    printf("The most frequent element is %d, occurring %d times.\n", mostFrequent, maxCount);

    return 0;

}