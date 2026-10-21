
#include <stdio.h>

int main() {
    int temp[3][3][3];
    int i, j, k;
    int sum;
    int hottestlayer = 1;
    float avg, maxavg = 0;
    int maxtemp;
    int x, y, z;


    for(k = 0; k < 3; k++) {
        printf("\nEnter temperatures for Layer %d:\n", k + 1);

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                scanf("%d", &temp[i][j][k]);
            }
        }
    }

    for(k = 0; k < 3; k++) {
        sum = 0;

        for(i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++) {
                sum += temp[i][j][k];
            }
        }

        avg = (float)sum / 9;

        printf("Average Temperature of Layer %d: %.2f C\n",
               k + 1, avg);

        if(k == 0 || avg > maxavg) {
            maxavg = avg;
            hottestlayer = k + 1;
        }
    }

    maxtemp = temp[0][0][0];
    x = 1;
    y = 1;
    z = 1;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                if(temp[i][j][k] > maxtemp) {
                    maxtemp = temp[i][j][k];
                    x = i + 1;
                    y = j + 1;
                    z = k + 1;
                }
            }
        }
    }

    printf("\n========== TEMPERATURE REPORT ==========\n");
    printf("Hottest Layer: Layer %d\n", hottestlayer);
    printf("Highest Layer Average: %.2f C\n", maxavg);
    printf("Maximum Temperature: %d C\n", maxtemp);
    printf("Location: Layer %d, Row %d, Column %d\n",
           z, x, y);

    return 0;
}
