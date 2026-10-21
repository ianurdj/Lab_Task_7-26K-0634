#include <stdio.h>
int main() {

int data[3][3];
int key[3][3];
int encrypted[3][3];
int i, j;
int max, mx, mxx;


for(i = 0; i<3; i++){
    for(j =0 ; j< 3; j++){
        printf("enter data value: ");
        scanf("%d", &data[i][j]);
    }
}
printf("\n");
for(i = 0; i<3; i++){
    for(j =0 ; j< 3; j++){
        printf("enter key value: ");
        scanf("%d", &key[i][j]);

        encrypted[i][j] = data[i][j]*key[i][j]+(i+j);
    }

}
for (int i =0; i<3; i++){
    for(int j = 0; j< 3; j++){
        printf("%d ", encrypted[i][j]);     
    }
    printf("\n");
}
max = encrypted[0][0];
mx = 0, mxx= 0;
for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++) {
    if(max < encrypted[i][j]){
    max= encrypted[i][j];
     mx = i;
     mxx = j;
    
}
        }
       
    }
     printf("The max value is [%d][%d] = %d\n",mx,mxx, max);
     

    return 0;
}