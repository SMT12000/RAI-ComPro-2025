#include<stdio.h>
int main()

{
   int total_minutes, hours, minutes;
   printf("Enter total minutes: ");
   scanf("%d",&total_minutes);

   hours = total_minutes / 60;
   minutes = total_minutes % 60;

   printf("%d minutes is %d hour(s) and %d minute(s)", total_minutes, hours, minutes);

   return 0;


}
