#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    printf(" %d years ",  n/365);
    printf("%d months ", n%365/30);
    printf("%d days ", n%365%30);
  

    return 0;
}