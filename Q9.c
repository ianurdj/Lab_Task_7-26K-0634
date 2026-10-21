#include <stdio.h>

int main (){
  int i, j;
  int dept, emp, day;
  int salary, companytotal = 0, depttotal = 0;

 


printf("Enter the number of Departments in the company: ");
scanf("%d", &dept);

for(i=1; i <=dept; i++){

    depttotal = 0;
    
    printf("\nEnter the number of employees in department %d: ", i);
    scanf("%d", &emp);

    for(j=1 ; j <= emp; j++){
        
    
        printf("\nEnter the number of days employee %d has worked: ", j);
        scanf("%d", &day);
       salary = day*500;
      
            
            if(day >25){
                salary = (day*500) + 2000;
            }

             printf("\nDepartment %d, Employee %d, Days Worked =  %d, Salary = %d\n", i, j,day, salary);

             depttotal+= salary;
            
        }
            
        printf("\nTotal Salary paid to all employees in Department %d = Rs %d\n", i, depttotal);
        printf("\n");
        companytotal+= depttotal;
          
    }
       
       printf("\nTotal Salary paid across all Departments = Rs %d\n", companytotal);
          

    return 0;
}