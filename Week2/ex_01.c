#include<stdio.h>
int main()

{

  float point; 
  int number;
  char character; 
  printf("Please enter an integer value: ");
  scanf("%d", &number);
  printf("You entered: %d\n", number);
  printf("Please enter a float value: ");
  scanf("%f", &point);
  printf("You entered: %f\n", point);
  printf("Please enter a character: ");
  scanf(" %c", &character);
  printf("You entered: %c\n", character);

  return 0;

}