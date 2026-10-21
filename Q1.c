#include <stdio.h>
int main(){

    int seats [10][4] ={0};
    int seat=0;
    int row=0;
    int sn;
    int fullrows=0, booked=0;
    int i, j;

    printf("\t-----SEATS RESERVATION-----\n");
    

    printf("\nHow many seats do you want to reserve?\n");
    scanf("%d", &seat);
    
    
   for(int i = 0; i < seat; i++){

      printf("Seat number?(1-10): \n");
      scanf("%d", &sn);

      printf("Row number?(1-4): \n");
      scanf("%d", &row);


      if( sn < 1 || sn > 10 || row < 1 || row > 10 ){
        printf("Invalid input!\n");
        i--;
        continue;
      }
      if (seats[row - 1][sn - 1] == 0) {
            seats[row - 1][sn - 1] = 1;
        printf("----------------------------\n");
            printf("Seat reserved successfully!\n");
        printf("----------------------------\n");


        } else {
             printf("----------------------------\n");
            printf("Seat already booked\n");
             printf("----------------------------\n");
            i--;
        }
    }
    printf("\nSeating Arrangement:\n");

    for (i = 0; i < 10; i++) {
        printf("%2d: ", i + 1);

        for (j = 0; j < 4; j++) {
            printf("%d ", seats[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        booked = 1;

        for (j = 0; j < 4; j++) {
            if (seats[i][j] == 0) {
                booked = 0;
                break;
            }
        }

        if (booked == 1) {
            fullrows++;
        }
    }

    printf("\nTotal fully booked rows: %d\n", fullrows);


    return 0;
}