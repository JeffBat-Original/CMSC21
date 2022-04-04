#include <stdio.h>
int main(){
    int i, n;

    i = 0;
    n = 2;
    
    printf (" TABLE of POWER OF 2\n");
    printf ("n     2 to the n\n");


    while (n <= 1024){
        printf ("%d        %d\n",i,n);
        i += 1;
        n = pow ( 2 , i);
    }
}