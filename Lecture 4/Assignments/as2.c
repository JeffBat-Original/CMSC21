#include <stdio.h>
int main(){
    int i;

    i = 9;

    while (i < 10) {
        printf ("a\n");
        i += 1;
    }
    for (; i < 10;) {
        printf ("b\n");
        i += 1;
    }
    do {
        printf ("c\n");
        i += 1;
    } while (i < 10);
}