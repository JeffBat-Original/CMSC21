/* Reverses a series of numbers */

#include <studio.h>
#define n_students 5

int main (void){
    float grades[n_students],average, sum;
    int i;

    printf ("Enter scores one by one: ");

    for (i = 0; i < n_students; i++){
        printf ("Enter grade for Student %d: ", i+1);
        scanf ("%f", &grade[i]);
    }

    for (i = 0; i < n_students; i++){
        sum += grades[i];
    }

    average = sum / n_students;

    printf ("%.2f\n", average);

    return 0;
}   