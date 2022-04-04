#include <stdio.h>

int main() {

    int i;

    // i < 8 because 2^8 is 256
    for(i=0; i<8; i++) {

    // 1 << i ( x << y ) is equals to 1 * 2^i ( x * 2^y )
    printf("%d ", 1 << i);
    }
    return 0;
}