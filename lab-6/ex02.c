#include <stdio.h>

typedef struct {
    char name[100];
    int age;
    float score;
} Student;

int main() {
    Student s[3];
    int highestIndex = 0;

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);
    }

    for (int i = 1; i < 3; i++) {
        if (s[i].score > s[highestIndex].score) {
            highestIndex = i;
        }
    }

    printf("\nThe highest score belongs to %s at %.1f scores!\n",
           s[highestIndex].name, s[highestIndex].score);

    return 0;
}
