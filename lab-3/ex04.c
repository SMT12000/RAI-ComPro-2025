#include <stdio.h>

int main() {
    float calculus, physics, science, average;
    char name[100];
    char grade; 

    printf("Enter your name: ");
    scanf("%[^\n]%*c", name); 

    printf("Enter your Calculus score: ");
    scanf("%f", &calculus);

    printf("Enter your Physics score: ");
    scanf("%f", &physics);

    printf("Enter your Science score: ");
    scanf("%f", &science);
    average = (calculus + physics + science) / 3.0;

    if (average >= 80) {
        grade = 'A';
    } else if (average >= 70 && average <80) {
        grade = 'B';
    } else if (average >= 60 && average <70) {
        grade = 'C';
    } else if (average >= 50 && average <70) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%s, your average is %.2f. You got grade %c.\n", name, average, grade);

    return 0;
}