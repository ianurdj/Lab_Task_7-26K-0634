#include <stdio.h>
int main(){
    int i , j, money, sum, prosum;
    int total = 0;
    int sales [4][5];
    int totalsales[4]={0};
    int totalpro[5]={0};
    int bonus;

for(i =0 ; i <4 ; i ++){
    printf("---------------------------------------------\n");

    for(j=0; j<5; j++){
    printf("Amount of product %d sold by Salesman %d is Rs ", j+1, i+1);
    scanf("%d", &sales[i][j]);
    
    }
    printf("\n");
    

}
printf("==============================================\n");

for( i = 0; i <4; i++){
    sum =  0;
    for(j =0; j<5; j++){
        sum+= sales[i][j];
    }
    totalsales[i] = sum;

    printf("Total Sales per Salesman %d is Rs %d\n",i+1, totalsales[i]);
}

printf("\n");
printf("==============================================\n");

for( j = 0; j< 5; j++){
    prosum =  0;
    for(i =0; i<4; i++){
        prosum+= sales[i][j];
    }
    totalpro[j] = prosum;

    printf("Total Sales per Product %d is: Rs %d\n",j+1, totalpro[j]);
}
printf("==============================================\n");

int max = totalpro[0];
int highpro = 0;
for(j=1; j <5 ;j++){
    if(max < totalpro[j]){
        max = totalpro[j];
        highpro = j;
    }

}
printf("Most Expensive Product is: Product %d with Total Sales: Rs. %d\n", highpro + 1, max);

printf("\n==============================================\n");
    printf("FINAL AMOUNTS AFTER BONUS\n");

    for (i = 0; i < 4; i++) {
        if (totalsales[i] > 10000) {
            bonus = totalsales[i] * 10 / 100;

            printf("Salesman %d: Total = Rs %d, Bonus = Rs %d, Final Amount = Rs %d\n",
                   i + 1, totalsales[i], bonus,
                   totalsales[i] + bonus);
        } else {
            printf("Salesman %d: Total = Rs %d, No Bonus, Final Amount = Rs %d\n",
                   i + 1, totalsales[i], totalsales[i]);
        }
    }

    printf("==============================================\n");

    return 0;
}