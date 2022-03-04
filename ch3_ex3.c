#include <stdio.h>

int main(void)
{
  // declaring the variables with an integer data type
  int num1, denom1, num2, denom2, result_num, result_denom;
  
  printf("Enter first fraction: ");
  // scanf id use to be able to input values
  // & is used as a pointer to which variable the value will be assigned to
  scanf ("%d/%d", &num1, &denom1);
    
  printf("Enter second fraction: ");
  // scanf id use to be able to input values
  // & is used as a pointer to which variable the value will be assigned to
  scanf ("%d/%d", &num2, &denom2);
  
  // once the variables num1,denom1,num2,denom2 has their values, it will be put in an equation which is equal to the variables result_num or result_denom
  result_num = num1 * denom2 + num2 * denom2;
  result_denom = denom1 * denom2;

  // The resulting values of variables result_num and result_denom will be printed
  printf("The sum is %d/%d\n",result_num,result_denom);
  
  // exit code of the program
  return 0;
}
