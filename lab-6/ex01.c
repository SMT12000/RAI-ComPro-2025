#include <stdio.h>

typedef struct {
    char name[100];
    int age;
    float score;
} Student;

int main() {
    Student s[3];

    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);
    }

    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n",
               i + 1, s[i].name, s[i].age, s[i].score);
    }

    return 0;
}
