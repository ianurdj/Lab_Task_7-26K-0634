#include <stdio.h>
int main(){

int box[3][3];
int i,j,k,l;
int valid = 1;



 
for(i=0; i < 3; i++){
    for(j =0; j<3; j++){
        
        printf("Enter the value: ");
        scanf("%d", &box[i][j]);

    
    if(box[i][j] < 0 || box [i][j] > 9){
    printf("Invalid grid\n");
 return 0;
    }
    }
}
    for( i =0; i<3; i++){
        for( j =0; j< 3; j++){

            if(box[i][j] != 0){
                for (k = 0; k< 3; k++){
                    for(l=0; l< 3; l++){
                        
                        if( i == k && j == l){
                            continue;
                        }
                        if(box[i][j] == box[k][l]) {
                        valid = 0;
                    }
                }
            }
       
        }
    }
}
    printf("----------\n");     

    for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
        printf(" %d ", box[i][j]);
    }
    printf("\n");
}
printf("----------");
    if(valid == 1) {
        printf("\nValid Grid\n");
    }
    else {
        printf("\nInvalid Grid\n");
    }

    return 0;
}