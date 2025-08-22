#include <stdio.h>

int main() {
    int n, i, j, search, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output:\n");
    for (i = 0; i < n; i++) {
        int already_counted = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                already_counted = 1;
                break;
            }
        }

        if (!already_counted) {
            count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("Element %d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
