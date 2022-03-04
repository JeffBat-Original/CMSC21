#include <stdio.h>

int main(void)
{ 
  // declaring the variable i with an integer data type
  int i;
  // declaring x with a float data type
  float x;
  
  // assigning values to created variables
  i = 40;
  x = 839.21f;
  
  // printing of output  
  // %d is used to substitute the variable with a decimal integer or an integer data value
  // numbers after the "%" characters indicate the minimum ammount of characters to be subtituted
  // if the value to be substituted doesn't reach the minimum amount, spaces will be filled in before the value of the variable is showed
  // if a "-" character is added before the numbers, the spaces will instead be added after the value of the variable
  // if the number after the "%" character contains a decimal point, it indicates the minimum amount of characters in decimal form,if the value has not attained the minimum amount
            //then 0 will be added before the value until it has reached the minimum amount -- for integer values
            //then 0 will be added after the value until it has reached the minimum amount -- for float values
  
  //%f is used to substitute the variable with a float data value
  //%e is used to display the value in exponential form
  //%g is used to display value in a fixed decimal form
  
  printf ("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
  printf ("|%10.3f|%10.3e|%-10g|\n", x, x, x);


  // exit code of the program
  return 0;
}
