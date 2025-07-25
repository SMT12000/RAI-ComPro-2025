#include<stdio.h>
int main()

{

  float gpa, Programming_score, Physics_score, Calculus_score;
  char name[50];
  char studentid[50];
  printf("Enter you Name: ");
  scanf("%s", name);
  printf("Enter your student ID: ");
  scanf("%s", studentid);
  printf("Enter your Programming score: ");
  scanf("%f", &Programming_score);
  printf("Enter your Physics score: ");
  scanf("%f", &Physics_score);
  printf("Enter you Calculus score: ");
  scanf("%f", &Calculus_score);
  gpa=(Programming_score + Physics_score + Calculus_score)/3.0;

  printf("Hi %s (%s)! Your GPA is %.2f\n", name, studentid, gpa);

  return 0;

}

