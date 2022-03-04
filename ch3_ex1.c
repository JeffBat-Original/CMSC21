#include <stdio.h>

int main(void){   
  // declaring the variable i,j with an integer data type
    int i, j;
  // declaring x,y with a float data type
    float x, y;

  // assigning values to created variables
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

 // printing of output   
 // %d is used to substitute the variable with a decimal integer or an integer data value
 // %f is used to substitute the variable with a float data value
 // variables (i,j,x,y) are placed after the string and in the order of what variable will be substituted first
 // (the substituing process will still depend on the % character which will indicate what data type will be substituted)
  
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); 
}
