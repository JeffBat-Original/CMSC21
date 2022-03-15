#include <stdio.h>

int main() {
    int  n ,num, denom, reversed;

    printf ("Please enter 2 digit integer: ");
    scanf ("%d", &n);

    denom = n % 10;
    num = n / 10;

    reversed = denom * 10 + num;

    printf  ("The reverse 2 digit integer is: %d", reversed);
    return 0;
}