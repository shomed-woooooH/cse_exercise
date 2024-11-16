#include <stdio.h>
int main(){
    printf("enter the minute :");
    int input;
    scanf("%d",&input);
    printf("%d hours %d minute",input/60,input%60);


    return 0;
}