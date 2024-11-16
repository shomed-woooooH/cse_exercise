#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    printf("year   :  %d \n",n/365);
    printf("weeks  :  %d \n",n%365/7);
    printf("days   :  %d \n",n%365%7);


    return 0;
}