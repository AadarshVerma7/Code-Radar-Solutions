#include <stdio.h>
#include <limits.h>

int main() {
    int len;
    scanf("%d", &len);

    int arr[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN, max2 = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] > max) {
            max2 = max; 
            max = arr[i];
        } else if (arr[i] > max2 && arr[i] < max) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", max2);
    }

    return 0;
}
