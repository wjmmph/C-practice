#include <stdio.h>

int main() {
    int arr[10] = {1, 4, 5, 4, 2, 1, 4, 5, 1, 2};
    int n = 10, i, j, count;

    for (i = 0; i < n; i++) {
        count = 1;
        if (arr[i] == -1)
            continue;

        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d occurs %d times\n ", arr[i], count);
    }
    return 0;
}