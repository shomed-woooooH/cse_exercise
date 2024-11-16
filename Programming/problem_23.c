#include <stdio.h>
int main(){

    float first,second,third;
    scanf("%f %f %f",&first,&second,&third);
    if(first+second < third || second+third < first ||first+third < second ){
        printf("given value are invalid");
    }else{
        printf("%.2f",first+second+third);
    }
    


}
