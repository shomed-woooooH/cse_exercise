#include <stdio.h>
#include <math.h>
int main(){
    int x1;
    scanf("%d",&x1);
    int y1;
    scanf("%d",&y1);

    
    int x2;
    scanf("%d",&x2);
    int y2;
    scanf("%d",&y2);

    int x = x2-x1;
    int y = y2-y1;


    printf("distance between the said point : %f", sqrt(pow(x,2)+pow(y,2))  );

    return 0;
}