#include<stdio.h>

int main(){
   int i,monthdays;
   int dow;
   printf("Enter the number of days in a month: ");
   scanf("%d",&monthdays);
   printf ("\n");
   printf("The day of the week on which the month begins: ");
   scanf("%d",&dow);
   printf ("\n");
   
   // spacing
   for(i=1;i<dow;i++)
      printf(" ");
   // calendar
   for(i=1;i<=monthdays;i++){
      printf("%3d",i);
      if((dow+i-1)%7==0)
         printf("\n");
   }
   return 0;
}