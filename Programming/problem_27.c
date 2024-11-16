#include <stdio.h>
int main(){
    int positive= 0;
    int negative=0;
    int arr[5];
    for(int i = 0;i< 5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    printf("positive number : %d\nnegative numbers: %d",positive,negative);
    return 0;
}
