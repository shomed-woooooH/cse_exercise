#include <stdio.h>
int main(){

    int emplyeeIDs,totalWorkHour,salary_amount;
    printf("enter your employee id :");
    scanf("%d",&emplyeeIDs);
    printf("enter total work hour  :");
    scanf("%d",&totalWorkHour);
    printf("enter salary amount  :");
    scanf("%d",&salary_amount);

    printf("Employees ID : %d \nSalary       :$ %d.00",emplyeeIDs,totalWorkHour*salary_amount);
    return 0;
}