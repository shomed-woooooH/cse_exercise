#include <stdio.h>

int main(){

    char *month[12]= {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"}  ; 
    int n;
    scanf("%d",&n);
    for(int i = 0; i< 12;i++){
        if(i == n-1){
            printf("%s",month[i]);
        }
    }
    
    return 0;
}
