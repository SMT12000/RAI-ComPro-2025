#include <stdio.h>

int main() {
    int calculus, physics, compro;
    char grade_cal, grade_phy, grade_com;
    float num_cal, num_phy, num_com, gpa;

    printf("Calculus score: ");
    scanf("%d", &calculus);
    printf("Physic score: ");
    scanf("%d", &physics);
    printf("compro score: ");
    scanf("%d", &compro);

    if (calculus >= 80) {
        grade_cal = 'A'; num_cal = 4.0;
    } else if (calculus >= 70) {
        grade_cal = 'B'; num_cal = 3.0;
    } else if (calculus >= 60) {
        grade_cal = 'C'; num_cal = 2.0;
    } else if (calculus >= 50) {
        grade_cal = 'D'; num_cal = 1.0;
    } else {
        grade_cal = 'F'; num_cal = 0.0;
    }

    if (physics >= 80) {
        grade_phy = 'A'; num_phy = 4.0;
    } else if (physics >= 70) {
        grade_phy = 'B'; num_phy = 3.0;
    } else if (physics >= 60) {
        grade_phy = 'C'; num_phy = 2.0;
    } else if (physics >= 50) {
        grade_phy = 'D'; num_phy = 1.0;
    } else {
        grade_phy = 'F'; num_phy = 0.0;
    }

    if (compro >= 80) {
        grade_com = 'A'; num_com = 4.0;
    } else if (compro >= 70) {
        grade_com = 'B'; num_com = 3.0;
    } else if (compro >= 60) {
        grade_com = 'C'; num_com = 2.0;
    } else if (compro >= 50) {
        grade_com = 'D'; num_com = 1.0;
    } else {
        grade_com = 'F'; num_com = 0.0;
    }

    gpa = (num_cal + num_phy + num_com) / 3.0;

    printf("\n%-10s%-8s%-7s%s\n", "Subject", "Score", "Grade", "Grade");
    printf("--------------------------------------\n");
    printf("%-10s%-8d%-7c%.1f\n", "Cal", calculus, grade_cal, num_cal);
    printf("%-10s%-8d%-7c%.1f\n", "Physics", physics, grade_phy, num_phy);
    printf("%-10s%-8d%-7c%.1f\n", "compro", compro, grade_com, num_com);
    printf("GPA: %.1f\n", gpa);

    return 0;
}
