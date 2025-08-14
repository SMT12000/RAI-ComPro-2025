#include <stdio.h>

char letterGrade(int score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

float numericGrade(char grade) {
    switch (grade) {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        default:  return 0.0;
    }
}

int main() {
    int cal, phy, comp;
    char gCal, gPhy, gComp;
    float nCal, nPhy, nComp, gpa;

    printf("Calculus score: ");
    scanf("%d", &cal);
    printf("Physics score: ");
    scanf("%d", &phy);
    printf("Compro score: ");
    scanf("%d", &comp);

    gCal = letterGrade(cal);
    gPhy = letterGrade(phy);
    gComp = letterGrade(comp);
    nCal = numericGrade(gCal);
    nPhy = numericGrade(gPhy);
    nComp = numericGrade(gComp);

    gpa = (nCal + nPhy + nComp) / 3.0;

    printf("%-10s %-6s %-6s %-6s\n", "Subject", "Score", "Grade", "Numeric");
    printf("--------------------------------------\n");
    printf("%-10s %-6d %-6c %-6.1f\n", "Cal", cal, gCal, nCal);
    printf("%-10s %-6d %-6c %-6.1f\n", "Physics", phy, gPhy, nPhy);
    printf("%-10s %-6d %-6c %-6.1f\n", "Compro", comp, gComp, nComp);
    printf("GPA: %.1f\n", gpa);

    return 0;
}