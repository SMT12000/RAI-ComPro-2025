#include <stdio.h>

int main() {
    char name[50];
    float calculus, physic, science, average;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your Calculus score: ");
    scanf("%f", &calculus);
    printf("Enter your Physic score: ");
    scanf("%f", &physic);
    printf("Enter your Science score: ");
    scanf("%f", &science);

    average = (calculus + physic + science) / 3;

    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70) {
        grade = 'B';
    } else if (average >= 60) {
        grade = 'C';
    } else if (average >= 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, average, grade);

    return 0;
}
