#include <stdio.h>

int main(){
    int digit1, digit2;

    // Prompt
    printf ("Please Enter a 2-digit number: ");
    scanf ("%1d%1d", &digit1, &digit2);

// tens digit
    switch (digit1){
        // 11-19
        case 1:
            switch (digit2){
                case 0:
                    printf ("ten");
                    return 0;
                case 1:
                    printf ('eleven');
                    return 0;
                case 2:
                    printf ("twelve");
                    return 0;
                case 3:
                    printf ('thirteen');
                    return 0;
                case 4:
                    printf ("fourteen");
                    return 0;
                case 5:
                    printf ('fifteen');
                    return 0;
                case 6:
                    printf ("sixteen");
                    return 0;
                case 7:
                    printf ('seventeen');
                    return 0;
                case 8:
                    printf ('eighteen');
                    return 0;
                case 9:
                    printf ("nineteen");
                    return 0;   
            }

        // 20+
        case 2:
            printf ("twenty");
            break;
        // 30+
        case 3:
            printf ("thirty");
            break;
        // 40+
        case 4:
            printf ("forty");
            break;
        // 50+
        case 5:
            printf ("fifty");
            break;
        // 60+    
        case 6:
            printf ("sixty");
            break;
        // 70+
        case 7:
            printf ("seventy");
            break;
        // 80+
        case 8:
            printf ("eighty");
            break;
        // 90+
        case 9:
            printf ("ninety");
            break;

    }

// ones digit
switch (digit2){
        // 1
        case 1:
            printf ("-one");
            return 0;
        // 2
        case 2:
            printf ("-two");
            return 0;
        // 3
        case 3:
            printf ("-three");
            return 0;
        // 4
        case 4:
            printf ("-four");
            return 0;
        // 5
        case 5:
            printf ("-five");
            return 0;
        // 6    
        case 6:
            printf ("-six");
            return 0;
        // 7
        case 7:
            printf ("-seven");
            return 0;
        // 8
        case 8:
            printf ("-eight");
            return 0;
        // 9
        case 9:
            printf ("-nine");
            return 0;

    }
    return 0;   
}