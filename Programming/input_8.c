#include <stdio.h>
int main(){

    int count = 0;
    int sum = 0;
    int value;
    while(count <3){
        scanf("%d",&value);
        sum+=value;
        count++;
    }

    printf("%d",sum);
    return 0;
}