#include <stdio.h>
int main(){
    int distance;
    scanf("%d",&distance);
    int spent;
    scanf("%d",&spent);
    printf("average consumption (km/lt): %.2f",(float)(distance/spent));
    return 0;
}