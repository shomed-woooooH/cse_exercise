#include <stdio.h>
int main(){
    int average;
    int count = 0;
    average = 0;
    int arr[5];
    for(int i = 0;i< 5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]> 0){
            average+=arr[i];
            count++;
        }
    }
    printf("average value is %.2f",(float)average/count);
    return 0;
}
