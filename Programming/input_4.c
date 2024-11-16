#include <stdio.h>
int main(){

    float kilo;
    printf("input kilometer per hour :");
    scanf("%f",&kilo);
    printf("%.2f miles per hour",kilo/1.61);

    return 0;
}