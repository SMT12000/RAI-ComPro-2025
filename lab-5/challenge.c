 #include <stdio.h>

int main() {
    int n, i, j, count;
    int numbers[n];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for(i = 0; i < n; i++) {
        count = 1;
        if(numbers[i] != -1) {
            for(j = i + 1; j < n; j++) {
                if(numbers[i] == numbers[j]) {
                    count++;
                    numbers[j] = -1;
                }
            }
            printf("Element %d occurs %d times\n", numbers[i], count);
        }
    }

    return 0;
}
