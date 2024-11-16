#include <stdio.h>
int main(){
    int firstNumber ;
    int secondNumber ;
    scanf("%d %d",&firstNumber,&secondNumber);
    if(firstNumber%secondNumber == 0 || secondNumber%firstNumber == 0){
        printf("multiplied!");
    }
}

