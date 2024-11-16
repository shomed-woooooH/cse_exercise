#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    printf("%d notes of 100.00",  n/100);
    printf("\n%d notes of 50.00", n%100/50);
    printf("\n%d notes of 20.00", n%100%50/20);
    printf("\n%d notes of 10.00", n%100%50%20/10);
    printf("\n%d notes of 5.00",  n%100%50%20%10/5);
    printf("\n%d notes of 2.00",  n%100%50%20%10%5/2);
    printf("\n%d notes of 1.00",  n%100%50%20%10%5%2/1);

    return 0;
}