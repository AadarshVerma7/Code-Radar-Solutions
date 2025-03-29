// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Input array size
    
    int arr[n]; // Declare array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    int visited[n]; // Array to track if an element is already counted
    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as unvisited
    }

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue; // Skip if already counted
        }

        int count = 1; // Initialize frequency

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;          // Increment frequency
                visited[j] = 1;   // Mark as counted
            }
        }

        // Print the unique element and its frequency
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
