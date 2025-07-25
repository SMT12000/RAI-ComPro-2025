#include<stdio.h>
int main()

{
  float age,height,weight;
  char name[50]="Jane";
  char education [100];
  char gender [20];
  printf("Enter you Name: ");
  scanf("%[^\n]",name);
  printf("Enter you Age: ");
  scanf("%f",&age);
  printf("Enter your height: ");
  scanf("%f",&height);
  printf("Enter your weight: ");
  scanf("%f",&weight);
  printf("Enter you gender: ");
  scanf("%s",gender);
  printf("Enter you Education Qualification: ");
  scanf(" %[^\n]",education);

  printf("Name:%s\nAge:%f\nGender:%s\nHeight:%f\nweight:%f\nEducation:%s\n", name, age, gender, height, weight, education);

  return 0;

}
