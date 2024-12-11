#include <stdio.h>

int main(){
    int basic_salary, gross_salary;
    printf("Enter your basic salary: \n");
    scanf("%d", &basic_salary);
    
    gross_salary = (basic_salary) + (0.4 * basic_salary) + (0.2 * basic_salary);
    printf("Your gross salary is %d", gross_salary);

}