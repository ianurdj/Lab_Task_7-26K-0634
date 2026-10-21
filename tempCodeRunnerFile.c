#include <stdio.h>
int main (){
  int i, j, k;
  int cnum, mar, snum, sub, passed = 1;
  int total =0, classtotal = 0, schooltotal =0, csub = 0, ssub=0;
  float avg,cavg, savg;
 


printf("Enter the number of classes of school: ");
scanf("%d", &cnum);

for(i=1; i <=cnum; i++){
    
    printf("Enter the students number of class %d: ", i);
    scanf("%d", &snum);

    for(j=1 ; j <= snum; j++){
        
        printf("\nEnter the no of subjects for the student %d: ", j);
        scanf("%d", &sub);
        total = 0;
        passed = 1;
      
        
        for(k=1; k<=sub; k++){
            printf("Enter the marks for subject %d: ", k);
            scanf("%d", &mar);
           
            total = total + mar;
            
            if(mar<40){
                passed = 0;
            }
        }
     avg = (float) total/sub;
    printf("\nCLASS %d, Student %d, Total marks = %d,Average = %.2f, Result = %s\n", i, j, total, avg, passed ? "Pass" : "Fail");

        
            classtotal += total;
            csub += sub;

            schooltotal += total;
            ssub += sub;
    }
   if(csub > 0){
       cavg = (float)classtotal/csub;

       printf("\nClass %d Total Marks = %d\n", i, classtotal);
            printf("Class Average = %.2f\n\n", cavg);
}
}
      if(ssub > 0) {
        savg = (float)schooltotal / ssub;

        printf("Total Marks of School = %d\n", schooltotal);
        printf("Overall School Average = %.2f\n", savg);
      }
    return 0;
}