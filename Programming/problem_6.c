#include <stdio.h>
#include <math.h>
int main(){

    float pi = 3.14;
    int radius ;
    scanf("%d",&radius);

    printf("%.2f\n",2*pi*radius);
    printf("%.2f",pi*pow(radius,2));

    return 0;
}