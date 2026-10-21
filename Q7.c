#include <stdio.h>
int main(){

for(int i = 1; i < 6; i++){
    for(int j = 1; j<=i; j++){
        printf("%d ",i*j);
    }
    printf("\n");
}
for(int x = 4; x >=1; x--){
    for(int y = 1; y<= x; y++){
        printf("%d ",x * y);
    }
    printf("\n");
}

    return 0;
}