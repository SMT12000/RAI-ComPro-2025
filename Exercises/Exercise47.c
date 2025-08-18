#include <stdio.h>

int main() {
    char ch;
    int i, vowels = 0, consonants = 0;

    printf("Enter 10 lowercase characters:\n");

    for(i = 0; i < 10; i++) {
        scanf(" %c", &ch);

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of non-vowels: %d\n", consonants);

    return 0;
}
