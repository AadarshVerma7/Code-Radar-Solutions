#include <stdio.h>

int main() {
    int len;
    scanf("%d", &len);

    int arr[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], max2 = -1;

    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max2 = max;
            max = arr[i];
        } else if (arr[i] < max && arr[i] > max2) {
            max2 = arr[i];
        }
    }

    printf("%d\n", max2);
    return 0;
}
