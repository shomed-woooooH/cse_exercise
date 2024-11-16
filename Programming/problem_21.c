#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    
    if(n >80 || n<0){
        printf("error");
        return 0;
    }
    
    printf("[0,%d]",n+(10-n%10));

    return 0;
}