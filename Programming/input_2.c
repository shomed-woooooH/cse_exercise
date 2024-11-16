#include <stdio.h>
#include <math.h>
int main(){
    float radius;
    float pi = 3.14;
    printf("enter the radius of sphere :");
    scanf("%f",&radius);

    float volume = (4*pi*pow(radius,3))/3;
    
    printf("the volume of the sphere is : %.2f .",volume);
    return 0;
}