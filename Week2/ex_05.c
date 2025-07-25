#include<stdio.h>
int main()

{
  float height;
  char fullname[100];
  int age;
  char university[100];

  printf("Enter your full name: ");
  scanf("%[^\n]", fullname);
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your height: ");
  scanf("%f", &height);
  printf("Enter your University name: ");
  scanf(" %[^\n]", university);

  printf("\nHi! Everyone. This is %s from %s. I am %d years old and my height is \n%1f cm tall. \n", fullname, university, age, height);
 
  return 0;
}
