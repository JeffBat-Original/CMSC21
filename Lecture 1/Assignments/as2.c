#include <stdio.h>

int main() {
    int  n, num3, num2, num1, reversed;

    printf ("Please enter a 3 digit integer: ");
    scanf ("%d", &n);

    num3 = n % 10;
    num2 = (n % 100)/10;
    num1 = n / 100;

    reversed = (num3 * 100) + (num2 * 10) + num1;

    printf  ("The reversed 3 digit integer is: %d", reversed);
    return 0;
}