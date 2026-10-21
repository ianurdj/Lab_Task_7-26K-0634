#include <stdio.h>
int main(){
  int mark[2][3][3];
  int i,j,k;
  float total;
  int topmarks, otop,oclass, omarks, topper; 
  

  for(k = 0; k < 2; k++){
    printf("\n---For Class %d---\n", k +1);

    for( i =0; i<3; i++){

 printf("\n====Student %d===== \n", i +1);

      for( j =0; j < 3; j++){
       printf("\nEnter marks for Subject %d: ", j+1);
                scanf("%d", &mark [k][i][j]);
      
      }
    }
  }

  printf("\n ==========TOTAL MARKS==========\n");
     for(k = 0; k < 2; k++) {
      topper = 0;
      topmarks = 0;

        for(i = 0; i < 3; i++) {
            total = 0;

            for(j = 0; j < 3; j++) {
                total += mark[k][i][j];
            }

            printf("\nTotal marks of Student (%d) of Class %d are %.2f \n",
                   i + 1, k + 1, total);

                   if(total > topmarks) {
                topmarks = total;
                topper = i + 1;
            }
               if(total > omarks) {
                omarks = total;
                otop = i + 1;
                oclass = k + 1;
        }
}
        printf("\n----------------------------------------------------------");

        printf("\nTop Performer of Class %d is Student %d with %d marks\n",
               k + 1, topper, topmarks);

               printf("\n----------------------------------------------------------");
    }

    
    printf("\n========== OVERALL TOPPER ==========\n");
    printf("Overall Top Performer is Student %d of Class %d with %d marks\n",
           otop, oclass, omarks);

    return 0;
}