#include <stdio.h>
int main(){
    int sum  = 0;
    int arr[5];
    for(int i = 0;i< 5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==1){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}
