#include <stdio.h>
int main(){
    int weight_1,weight_2;
    int item_1,item_2;
    printf("enter weight item 1 :");
    scanf("%d",&weight_1);
    printf("enter number of item :");
    scanf("%d",&item_1);
    printf("enter weight item 2 :");
    scanf("%d",&weight_2);
    printf("enter number of item :");
    scanf("%d",&item_2);
    printf("average value : %.2f", (float)((item_1*weight_1) + (item_2*weight_2))/(item_1+item_2)      );


    return 0;
}