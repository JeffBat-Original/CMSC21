#include <stdio.h>
#include <stdbool.h>

#define row 8                      // used 3 macro to be not confused, even though they all have the same value
#define column 8
#define length 8

int main(){
    /* Variables */
    bool Found;
    int i, j, nput;
    char stations[length] = {'A','B','C','D','E','F','G','H'};
    int road_networks[row][column] = {{[0]=1, [1]=1, [5]=1},               //A
                                   {[0]=1, [1]=1, [2]=1},                  //B
                                   {[1]=1, [2]=1, [4]=1, [5]=1},           //C
                                   {[3]=1, [4]=1},                         //D
                                   {[3]=1, [4]=1},                         //E
                                   {[0]=1, [2]=1, [5]=1},                  //F
                                   {[0]=1, [3]=1, [6]=1},                  //G
                                   {[5]=1, [7]=1}};                        //H
     /* Adjacency Matrix */
          // 1st row
     printf ("  ");
     for (i = 0; i < length; i++){
          if (i == 2 || i == 3){
               printf("   [%c]", stations[i]);
          }else{
               printf("%4c ", stations[i]);
          }
     }
     printf("\n");
          // 2nd row and so on
     for (i = 0; i < length; i++){
               // print the letters
          if (i == 2 || i == 3){
               printf("[%c] ", stations[i]);
          }
          else{
               printf(" %-3c", stations[i]);          
               }
               //print the numbers
          for (j = 0; j < length; j++){
               printf ("%5d",road_networks[i][j]);
          }
          printf("\n");
     }
     

     /* Input */
     printf ("\nWhich point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
     scanf ("%d", &nput);

     /* Telling the user what station user is on */
     switch (nput){
          case 0:
               printf("at Point: A\n");
               break;
          case 1:
               printf("at Point: B\n");
               break;
          case 2:
               printf("at Point: C\n");
               break;
          case 3:
               printf("at Point: D\n");
               break;
          case 4:
               printf("at Point: E\n");
               break;
          case 5:
               printf("at Point: F\n");
               break;
          case 6:
               printf("at Point: G\n");
               break;
          case 7:
               printf("at Point: H\n");
               break;
          default:
               printf("Station Does not Exist\n");
               return 0;
     }
     
     /* Looping */
     while (Found==false){
          // conditional that the user is in a charging station
          if (stations[nput] == stations[2] || stations[nput] == stations[3]){
               if (stations[nput] == stations[2]){
                         printf ("point: C is a charging station");
                         break;
                    }
                    else if (stations[nput] == stations[3]){
                         printf ("point: D is a charging station");
                         break;
                    }
          //conditional that user is not in a charging station
          }else{
               if (road_networks[nput][2] == 1 || road_networks[nput][3] == 1){
                    Found = 1;
                    // User current station is near Charging Station C
                    if (road_networks[nput][2] == 1){
                         printf ("point: C arrived to charging station");
                         break;
                    }
                    // User current station is near Charging Station D
                    else if (road_networks[nput][3] == 1){
                         printf ("point: D arrived to charging station");
                         break;
                    }
                    // User current station is A (then goes to Charging Station C), H (then gos to Charging Station D)
               }else if (stations[nput] == stations[0] || stations[nput] == stations[7]){
                    if (stations[nput] == stations[0]){
                         printf ("point: C arrived to charging station");
                         break;
                    }
                    else if (stations[nput] == stations[7]){
                         printf ("point: D arrived to charging station");
                         break;
                    }
                    //end loop
                    Found = true;
               }
               
          }
     }
     return 0;             
}
     


